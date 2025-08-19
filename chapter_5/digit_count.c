/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Project 1.
*File created: 19/08/2025
*File last modified: 19/08/2025
*Name: digit_count.c
*Purpose: Write a program that calculates how many digits a number contains:
		  Enter a number: 374
		  The number 374 has 3 digits
		  You may assume that the number has no more than four digits
		  Hint: Use if statements to test the number
		  For example, if the number is between 0 and 9, it has one digit
		  If the number is between 10 and 99, it has two digits
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a number with 1-4 digits: ");
	int user_number = 0;
	scanf("%d", &user_number);

	int digit_count = 0;

	if(user_number >= 0 && user_number <= 9)
		digit_count = 1;
	else if(user_number >= 10 && user_number <= 99)
		digit_count = 2;
	else if(user_number >= 100 && user_number <= 999)
		digit_count = 3;
	else if(user_number >= 1000 && user_number <= 9999)
		digit_count = 4;
	else
		digit_count = 0;

	printf("%s%d%s%d%s\n", "The number ", user_number, " has ", digit_count, " digits");

	return 0;
}