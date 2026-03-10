/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 07:19:57 by muhabin-          #+#    #+#             */
/*   Updated: 2026/03/10 09:15:57 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

/*
	# Class template called array
	# so need private data like elements to stored? -> maybe unsigned int, the element itself as int?
	# so if create an empty array -> can just have size[]= {} something like this maybe??, data should point to the element in the array
	# Parametic constructor -> create the array and allocate memory based on how many elemets
	# when doing new int()-> basically it will value initilize to 0, if new int -> this will perform default initialize and value in indetermine(garbage)
	# need delete[] to free memory since we using new[]
	# copy constructor? -> create a new[] then copy over the array, not copy the pointer
	# assignment operator - > self assigning -> delete[] old then create a new[] then copy value, then return to the new/ *this
	# get value need to return the value, set is just set the value to the array so if the index is outbound need to throw
	# size function return the number of elements in the array can be const since it not modify the object
*/

template <typename T>
class Array
{
	private:
		T *_data; // pointer to element
		unsigned int _size; // number of element

	public:

	// Constructor & Destructor
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	~Array();
	Array& operator=(const Array &copy);

	// Subcript Operator
	T &operator[](unsigned int index);

	// Size function
	unsigned int size()const;
};

// Template

template<typename T>
Array<T>::Array() : _data(0), _size(0){}

// Parametric Constructor
template<typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n){}

template<typename T>
Array<T>::Array(const Array &copy) : _data(new T[copy._size]), _size(copy._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = copy._data[i];
}
template<typename T>
Array<T>::~Array(){ delete[] _data; }

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		delete[] _data;

		_size = copy._size;
		_data = new T[copy._size];

	for (unsigned int i = 0; i < _size; i++)
		_data[i] = copy._data[i];
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return _data[index];
}

template<typename T>
unsigned int Array<T>::size()const
{
	return (_size);
}
#endif
