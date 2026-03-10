/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:15:13 by muhabin-          #+#    #+#             */
/*   Updated: 2026/03/10 09:15:17 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	std::cout << "=== Test 1: Empty Array ===" << std::endl;
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	std::cout << "\n=== Test 2: Array with Size ===" << std::endl;
	Array<int> arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;

	// Fill array
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i * 10;

	// Print array
	std::cout << "Values: ";
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== Test 3: Copy Constructor ===" << std::endl;
	Array<int> copy(arr);
	copy[0] = 999;

	std::cout << "Original arr[0]: " << arr[0] << std::endl;  // Should be 0
	std::cout << "Copy copy[0]: " << copy[0] << std::endl;	 // Should be 999

	std::cout << "\n=== Test 4: Assignment Operator ===" << std::endl;
	Array<int> assigned;
	assigned = arr;
	assigned[1] = 888;

	std::cout << "Original arr[1]: " << arr[1] << std::endl;	  // Should be 10
	std::cout << "Assigned assigned[1]: " << assigned[1] << std::endl;  // Should be 888

	std::cout << "\n=== Test 5: Out of Bounds ===" << std::endl;
	try
	{
		arr[100] = 42;  // Out of bounds!
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: Out of bounds!" << std::endl;
	}

	std::cout << "\n=== Test 6: String Array ===" << std::endl;
	Array<std::string> strArr(3);
	strArr[0] = "Hello";
	strArr[1] = "World";
	strArr[2] = "!";

	for (unsigned int i = 0; i < strArr.size(); i++)
		std::cout << strArr[i] << " ";
	std::cout << std::endl;

	return 0;
}
