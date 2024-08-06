/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 05:11:57 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 05:37:28 by sshahary         ###   ########.fr       */
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

