/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:32:14 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 13:50:41 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
#define INFO_HPP

#include <iostream>

template< typename T >
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template< typename T >
T	min(T &a, T &b)
{
	return ( b <= a ? b : a);
}

template< typename T >
T max(T &a, T &b)
{
	return ( b >= a ? b : a);
}

#endif