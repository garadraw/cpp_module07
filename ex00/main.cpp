/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:32:13 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 13:54:35 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

int	main( void )
{
	int a = 2;
	int b = 3;
	
	std::cout << "Original values:  a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "Swap New Values: a = " << a << ", b = " << b << std::endl;

	std::cout << "Original values:  a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "Min Values: a = " << a << ", b = " << b << std::endl;

	std::cout << "Original values:  a = " << a << ", b = " << b << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "Max Values: a = " << a << ", b = " << b << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}