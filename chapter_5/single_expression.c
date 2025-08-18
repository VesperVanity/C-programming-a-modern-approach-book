/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 4.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: single_expression.c
*Purpose: Write a single expression whose value is either -1, 0, or +1,
		  depending on whether i is less than, equal to, or greater than j respectively
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int i = 0, j = 1;
	
	printf("%d\n", (i > j) - (i < j));

	return 0;
}