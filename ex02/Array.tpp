/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:34:13 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 17:56:24 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0)
{
	std::cout << "Void Constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n), _arr(nullptr)
{
	this->_arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T> &src): _size(src.size()), _arr(nullptr)
{
	if (src._size > 0)
	{
		this->_arr = new T[src.size()]();
		for (unsigned int j = 0; j <src.size(); j++)
		{
			this->_arr[j] = src._arr[j];			
		}
		this->_size = src.size();
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this->_arr)
		delete[] this->_arr;
	this->_arr = nullptr;
	if (src.size() > 0)
	{
		this->_arr = new T[src._size]();
		for (unsigned int c = 0; c < src.size(); c++)
		{
			this->_arr[c] = src._arr[c];
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
	return (this->arr[i]);
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