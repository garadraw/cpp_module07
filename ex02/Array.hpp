/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:29:52 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 19:18:30 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TPP files are categorized ordinarily as Data Files. Other file types can be 
Settings Files.
Windows, Linux, and Mac operating systems can be used to view TPP files.
Both desktop and mobile devices enable you to view and (sometimes) edit these files,
depending on the software used. With a Popularity Rating of "Low"
*/

#pragma once
#define ARRAY_HPP



#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>
class Array {
public:

	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	~Array();

	Array&		operator=(Array<T> const &src);
	T& 		operator[](unsigned int i);
	T const & 	operator[](unsigned int i) const;

	class OutOfBounds: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	unsigned int size() const;

private:

	T* _array;
	unsigned int _size;
};

#include "Array.tpp"
