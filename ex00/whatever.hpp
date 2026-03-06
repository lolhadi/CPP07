/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 07:34:22 by muhabin-          #+#    #+#             */
/*   Updated: 2026/03/07 07:53:50 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

// template<typename T>
// T max(T a, T b)
// {
// 	if (a > b)
// 		return a;
// 	else
// 		return b;
// }

// template <typename T>
// T min(T a, T b)
// {
// 	if (a < b)
// 		return a;
// 	else
// 		return b;
// }
template<typename T>
T max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b)
{
	return (a > b) ? a : b;
}
#endif
