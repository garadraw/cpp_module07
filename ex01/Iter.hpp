/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:09:59 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 14:27:42 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, T (*boring)(T))
{
	for (size_t i = 0; i < len; i++)
	{
		arr[i] = boring(arr[i]);
	}
}

template <typename T>
T boring(T i)
{
	return (i + 1);
}

#endif