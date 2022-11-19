/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:29:49 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 17:11:32 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i <MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cout << "Error, not same value\n";
			return (1);
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	for(int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	
	delete [] mirror;
	return (0);
}