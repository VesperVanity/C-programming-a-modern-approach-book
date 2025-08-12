/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Project 1.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: display_date.c
*Purpose: Write a program that accepts a date from the user in the form mm/dd/yyyy
		  and then displays it in the form yyyymmdd:
		  Enter a date (mm/dd/yyyy) : 2/17/2011
		  You entered the date 20110217 
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a date (mm/dd/yyyy) :");
	int day = 0;
	int month = 0;
	int year = 0;
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%d/%.2d/%d\n", year, month, day);
	return 0;
}