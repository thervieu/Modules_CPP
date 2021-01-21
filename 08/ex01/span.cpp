#include "span.hpp"

#include <stdexcept>
#include <algorithm>
#include <iostream>

span::span(void): _maxInts(0)
{}

span::span(size_t nb): _maxInts(nb)
{
	_vector = new std::vector<int>();
}

span::span(const span& copy): _maxInts(copy._maxInts)
{
	_vector = new std::vector<int>();
	*this = copy;
}

span::~span() {
	delete _vector;
}

span& span::operator=(const span& copy)
{
	_vector = copy._vector;
	return (*this);
}

void span::addNumber(int nb)
{
	if (_vector->size() == _maxInts)
		throw std::out_of_range("error:size > INT_MAX");
	_vector->push_back(nb);
}

void span::addNumber(int *begin , int *end) {
	if (end - begin + _vector->size() > _maxInts)
		throw std::out_of_range("error: not enough space in span");
	_vector->insert(_vector->end(), begin, end);
}

size_t span::getSize() const {
	return (_vector->size());
}

int span::longestSpan() const
{
	if (!_vector->size())
		throw std::length_error("error: no element in span");
	return (*std::max_element(_vector->begin(), _vector->end()) - *std::min_element(_vector->begin(), _vector->end()));
}

int span::shortestSpan() const
{
	if (!_vector->size())
		throw std::length_error("error: no element in span");
	std::sort(_vector->begin(), _vector->end());
	return (_vector->at(0));
}
