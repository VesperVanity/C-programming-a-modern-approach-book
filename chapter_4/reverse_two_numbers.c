/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Project 1.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: reverse_two_numbers.c
*Purpose: Write a program that asks the user to enter a two-digit number, then
		  prints the number with its digits reversed
		  A session with the program should have the following appearance:
		  Enter a two-digit number: 28
		  The reversal is: 82
		  Read the number using %d, then break it into two digits
		  Hint: If n is an integer, then n % 10 is the last digit in n and
		  n / 10 is n with the last digit removed
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a two-digit number: ");
	int first_digit = 0, second_digit = 0;
	scanf("%1d%1d", &first_digit, &second_digit);
	printf("%s%d%d\n", "The reversal is: ", second_digit, first_digit);

	return 0;
}