#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cctype>
# include <iostream>
# include <string>

template<typename T>
class Array
{
	private:

		T		*_elmts;
		int		_len;

	public:

		class OutOfBoundsException: public std::exception
		{
			const char* what() const throw()
			{
				return "ArrayException: index out of bounds";
			};
		};

		Array(): _elmts(NULL), _len(0)
		{
		};

		Array(int n): _elmts(NULL), _len(n)
		{
			_elmts = new T[n]();
		};

		Array(Array const &other): _elmts(NULL), _len(0)
		{
			if (other._len > 0)
			{
				if (_elmts)
					delete[] _elmts;
				_elmts = new T[other._len]();
				for (int i = 0; i < other._len; i++)
					_elmts[i] = other._elmts[i];
			}
			_len = other._len;
		};

		~Array()
		{
			if (_len > 0)
				delete[] _elmts;
		};

		Array<T>	&operator=(Array<T> const &other)
		{
			if (_len > 0)
				delete[] _elmts;
			_elmts = NULL;
			if (other._len > 0)
			{
				_elmts = new T[other._len]();
				for (int i = 0; i < other._len; i++)
					_elmts[i] = other._elmts[i];
			}
			_len = other._len;
			return (*this);
		};

		T	&operator[](int index)
		{
			if (index >= _len || index < 0)
				throw Array::OutOfBoundsException();
			return (_elmts[index]);
		};

		T	const &operator[](int index) const
		{
			return (operator[](index));
		};

		int	size(void) const
		{
			return (_len);
		};

};

#endif
