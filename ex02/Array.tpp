/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:34:13 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 17:12:06 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _arr(nullptr), _size(0)
{
	std::cout << "Void Constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _array(nullptr), _size(n)
{
	this->_array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> &src): _array(nullptr), _size(src.size())\
{
	if (src._sie > 0)
	{
		this->_array = new T[src.size()]();
		for (unsigned int j = 0; j <src.size(); j++)
		{
			this->_array[j] = src.array[j];			
		}
		this->_size = src.size();
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<t> &src)
{
	if (this->_array)
		delete[] this->_array;
	this->_array = nullptr;
	if (src.size() > 0)
	{
		this->_array = new T[src._size]();
		for (unsigned int c = 0; c < src.size(); c++)
		{
			this->_array[c] = src._array[c];
		}
	}
	this->_size = src.size();
	return (*this);
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (i > this->_size)
		throw Array::OutofBounds();
	return (this->_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char * Array<T>::OutofBounds::what() const throw()
{
	return ("Exception: i > Array Size");
}