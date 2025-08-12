/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Exercise 6.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: add_frac.c
*Purpose: Show how to modify the addfrac.c program of Section 3.2 so that the user
		  is allowed to enter fractions that contain spaces before and after each
		  / character
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter fraction like this x / y ");
	int x = 0;
	int y = 0;
	scanf("%d / %d", &x, &y);
	printf("%d / %d\n", x, y);
	return 0;
}