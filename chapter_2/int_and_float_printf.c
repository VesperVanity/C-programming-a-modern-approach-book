/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Exercise 4.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: int_and_float_printf.c
*Purpose: Write a program that declares several int and float variables
		  --without initializing them --and then prints their values
		  Is there any pattern to the values? (Usually there isn't)
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int number, another_number, last_number;
	float coffee, chess, books;

	//Only garbage values
	printf("%d\n%d\n%d\n", number, another_number, last_number);
	printf("%f\n%f\n%f\n", coffee, chess, books);

	return 0;
}