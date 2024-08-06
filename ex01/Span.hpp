/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 04:29:15 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 18:14:02 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <limits>


class Span
{
	private:
	unsigned int maxSize;
	std::vector<int> numbers;

	public:
	Span();
	Span(unsigned int N);
	Span(const Span &other);
	Span& operator=(const Span &other);
	~Span();
	void addNumber(int number);
	// template <typename InputIter>
	// void addNumbers(InputIter begin, InputIter end);
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;
	
	class SpanFullException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class NoSpanFoundException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

#endif
