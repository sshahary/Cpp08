/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 04:29:15 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 05:11:52 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>

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

	template <typename InputIter>
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	void addNumbers(InputIter begin, InputIter end);
	
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
	#include "Span.tpp"
};

#endif
