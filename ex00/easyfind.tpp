/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 03:50:35 by sshahary          #+#    #+#             */
/*   Updated: 2024/08/06 04:06:15 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"
template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	return std::find(container.begin(), container.end(), value);
}

#endif