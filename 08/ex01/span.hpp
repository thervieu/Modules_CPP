#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cstdlib>

#define MIN -2147483648
#define MAX 2147483647

class span
{
	private:

		std::vector<int> *_vector;
		const size_t _maxInts;
	
	public:

		span(void);
		span(size_t max = 0);
		span(const span&);
		~span();
		span& operator=(const span&);
		void addNumber(int);
		void addNumber(int *, int *);
		int shortestSpan() const;
		int longestSpan() const;
		size_t getSize() const;

};

#endif
