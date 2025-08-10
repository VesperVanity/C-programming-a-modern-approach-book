/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Exercise 5.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: legal_identifiers.c
*Purpose: Which of the following are not legal C indentifiers?
		  (a) 100_bottles
		  (b) _100_bottles
		  (c) one_hundred_bottles
		  (d) bottles_by_the_hundred_
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//Illegal
	int 100_bottles;
	//Legal
	int _100_bottles;
	//Legal
	int one__hundred__bottles;
	//Legal
	int bottles_by_the_hundred_;

	return 0;
}