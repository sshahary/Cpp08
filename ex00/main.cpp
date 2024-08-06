/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 04:07:29 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 04:21:39 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	int tofind = 3;

	std::vector<int>::iterator result = easyfind(vec, tofind);
	if (result != vec.end())
		std::cout << "Found " << tofind << " at position " << std::distance(vec.begin(), result) << std::endl;
	else
		std::cout<<"not in the container"<<std::endl;
	
	tofind = 6;

	result = easyfind(vec, tofind);
	if (result != vec.end())
		std::cout << "Found " << tofind << " at position " << std::distance(vec.begin(), result) << std::endl;
	else
		std::cout<<"Not in the container"<<std::endl;
	return (0);
}
