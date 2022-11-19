/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:34:13 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/19 19:18:34 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750


template<typename T>
Array<T>::Array(): _array(NULL), _size(0) {
	std::cout << "Void Constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _array(NULL), _size(n) {
	this->_array = new T[n]();
}

template<typename T>
Array<T>::Array(Array<T> const &src): _array(NULL), _size(src.size()) {
	if (src._size > 0) {
		this->_array = new T[src.size()]();
		for (unsigned int j = 0; j < src.size(); j++) {
			this->_array[j] = src._array[j];
		}
		this->_size = src.size();
	}
}

template<typename T>
Array<T>::~Array(void) {
	if (this->_size > 0)
		delete [] this->_array;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const &src) {
	if (this->_array)
		delete[] this->_array;
	this->_array = NULL;
	if (src.size() > 0) {
		this->_array = new T[src._size]();
		for (unsigned int c = 0; c < src.size(); c++) {
			this->_array[c] = src._array[c];
		}
	}
	this->_size = src.size();
	return (*this); // a = b
}

template<typename T>
T& Array<T>::operator[](unsigned int i) {
	if (i > this->_size)
		throw Array::OutOfBounds();
	return (this->_array[i]);
}

template<typename T>
T const & Array<T>::operator[](unsigned int i) const {
	if (i > this->_size)
		throw Array::OutOfBounds();
	return (this->_array[i]);
	//return (operator[](i)); Calls the above
}

template<typename T>
unsigned int 	Array<T>::size() const{
	return this->_size;
}


template<typename T>
const char *	Array<T>::OutOfBounds::what() const throw() {
	return ("Exception:: i > Array::_size");
}