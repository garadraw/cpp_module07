/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:10:01 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 17:11:10 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	// char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	int arr[5] = {10, 20, 30, 40, 50};
	// float arr[5] = {2.5, 3.5, 4.5, 5.5, 11.1};
	iter(arr, 5, boring);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	return (0);
}