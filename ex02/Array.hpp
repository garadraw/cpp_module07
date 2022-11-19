/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:29:52 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 17:52:48 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TPP files are categorized ordinarily as Data Files. Other file types can be 
Settings Files.
Windows, Linux, and Mac operating systems can be used to view TPP files.
Both desktop and mobile devices enable you to view and (sometimes) edit these files,
depending on the software used. With a Popularity Rating of "Low"
*/

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define MAX_VAL 750


#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
	
		unsigned int 	_size;
		T				*_arr;

	public:

		Array();
		Array(unsigned int n);
		Array(const Array <T> &src);
		~Array();

		Array &operator=(Array <T> const &src);
		T	operator[](unsigned int i);
		T	const &operator[](unsigned int i) const;

		class OutofBounds: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		unsigned int size() const;
};

#include "Array.tpp"

#endif
