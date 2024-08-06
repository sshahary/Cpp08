/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 05:11:57 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 17:30:40 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(){}
Span::Span(unsigned int N):maxSize(N){}
Span::Span(const Span &other):maxSize(other.maxSize), numbers(other.numbers){}
Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		maxSize = other.maxSize;
		numbers = other.numbers;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (numbers.size() >= maxSize)
	{
		throw SpanFullException();
	}
	numbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw NoSpanFoundException();

	std::vector<int> sortedNumbers(numbers);
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int shortest = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = sortedNumbers.begin(); it != sortedNumbers.end() - 1; ++it)
	{
		int span = *(it + 1) - *it;
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

int Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw NoSpanFoundException();

	int minElement = *std::min_element(numbers.begin(), numbers.end());
	int maxElement = *std::max_element(numbers.begin(), numbers.end());

	return maxElement - minElement;
}

const char* Span::SpanFullException::what() const throw()
{
	return "Span is full";
}

const char* Span::NoSpanFoundException::what() const throw()
{
	return "No span found";
}