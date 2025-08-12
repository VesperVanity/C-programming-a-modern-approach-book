/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Project 4.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: telephone_number.c
*Purpose: Write a program that prompts the user to enter a telephone number
		  in the form (xxx) xxx-xxxx and then displays the number in the form
		  xxx.xxx.xxxx:
		  Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
		  You entered: 404.817.6900
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter phone number [(xxx) xxx-xxxx] :");
	int start_part = 0, middle_part = 0, end_part = 0;
	scanf("(%d) %d-%d", &start_part, &middle_part, &end_part);

	printf("%s%d.%d.%d\n", "You entered: ", start_part, middle_part, end_part);

	return 0;
}