/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Project 3.
*File created: 14/08/2025
*File last modified: 14/08/2025
*Name: better_reverse_three_numbers.c
*Purpose: Rewrite the program in programming project 2. so that it prints the reversal
		  of the three-digit number without using arithmetic to split the number
		  into digits
		  Hint: See the upc.c program of section 4.1
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a two-digit number: ");
	int first_digit = 0, second_digit = 0, third_digit = 0;
	scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
	printf("%s%d%d%d\n", "The reversal is: ", third_digit, second_digit, first_digit);
	
	return 0;
}