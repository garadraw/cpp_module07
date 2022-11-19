/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:29:52 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 15:09:48 by vsimeono         ###   ########.fr       */
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

template <typename T>


class Array
{
	private:
	
		unsigned int _size;
		T			*arr;

	public:

		Array();
		Array(unsigned int n);
		Array(const Array <T> &src);
		~Array();

		Array &operator=(Array <T> cisnt &src);
		T	operator[](unsigned int i);
		T	const &operator[](unsigned int i) const;

		class OutofBounds: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		unsigned in size() const;
};

#endif