/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:37:26 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 18:16:04 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	{
		std::cout << "\nwith 20000 numbers:\n";
		Span				sp = Span(20000);
		std::vector<int>	random;
		srand(time(NULL));
		for (int i = 0; i < 20000; i++)
			random.push_back(rand() % 300000);
		sp.addNumbers(random.begin(), random.end());
		std::cout << "min:\t\t" << *std::min_element(random.begin(), random.end()) << std::endl
				<< "max:\t\t" << *std::max_element(random.begin(), random.end()) << std::endl
				<< "shortest:\t" << sp.shortestSpan() << std::endl
				<< "longest:\t" << sp.longestSpan() << std::endl;
	}
	return (0);
}


// #include <iostream>
// #include "Span.hpp"
// #include <vector>

// int main()
// {
// 	try {
// 		Span sp = Span(5);
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);

// 		std::cout << sp.shortestSpan() << std::endl; // Output: 2
// 		std::cout << sp.longestSpan() << std::endl;  // Output: 14

// 		// Test adding numbers with iterators
// 		std::vector<int> vec;
// 		for (int i = 0; i < 10000; ++i) {
// 			vec.push_back(i);
// 		}

// 		Span bigSpan(10000);
// 		bigSpan.addNumbers(vec.begin(), vec.end());

// 		std::cout << "Shortest span in bigSpan: " << bigSpan.shortestSpan() << std::endl;
// 		std::cout << "Longest span in bigSpan: " << bigSpan.longestSpan() << std::endl;

// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	return 0;
// }
