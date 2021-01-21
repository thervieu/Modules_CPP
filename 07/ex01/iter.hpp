#ifndef WHATEVER_HPP
# define WHATEVER_HPP

namespace ft
{
	template <typename T>
	void	iter(T *array, int len, void (*f)(const T &))
	{
		if (array)
		{
			for (int i = 0; i < len; i++)
			{
				f(array[i]);
			}
		}
	}
}

#endif
