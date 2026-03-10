/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:48:22 by muhabin-          #+#    #+#             */
/*   Updated: 2026/03/09 22:31:18 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>


/*
	* This will works for non-const references,
	 > since the references needs to be modified this is the best way to do it
	 > Function pointers that takes T & specificly
*/
template <typename T>
void iter(T *array, size_t length, void(*func)(T &))
{
	for (size_t i = 0; i < length ; i++)
	{
		func(array[i]);
	}
}

/*
	# WE CREATE A BETTER ONE THAT CAN WORK WITH CONST & NON CONST REFERENCES!!!!
		* It will become F func
			> F can be any type of function
			> void(*)(T &) -> takes non const(modified)
			> void(*)(T const &) -> take a const (no modified) -> print only
			> Void(*)(T)
*/
template <typename T, typename F>
void iter(T *array, size_t length, F func)
{
	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}
#endif
