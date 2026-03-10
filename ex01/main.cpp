/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: muhabin- <muhabin-@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/03/09 21:53:13 by muhabin-		  #+#	#+#			 */
/*   Updated: 2026/03/09 22:04:02 by muhabin-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


void printInt(int &x)
{
	std::cout << x << std::endl;
}
void printString(std::string &str)
{
	std::cout << str << std::endl;
}
void printFloat(float &x)
{
	std::cout<< std::fixed << std::setprecision(1);
	std::cout << x <<"f" <<std::endl;
}
// Non-const function (modifies)
void doubleInt(int &x)
{
	x *= 2;
}

// Const function (reads only)
void printConstInt(int const &x)
{
	std::cout << x << std::endl;
}


int main()
{
	int number[] = {1 , 2 ,3};
	iter(number, 3, printInt);

	std::string String[] = {"Apple", "Tea O Ice" , "McD"};
	iter(String, 3, printString);

	float floaties[] = {1.222, 1222.3 , 3333.13};
	iter(floaties, 3 , printFloat);

	int arr[] = {1, 2, 3};

	// Works with non-const function
	iter(arr, 3, printConstInt);  // ✅ Uses version 2

	// Works with const function

	iter(arr, 3, doubleInt);  // ✅ Uses version 2
	// Works with your original functions
}
