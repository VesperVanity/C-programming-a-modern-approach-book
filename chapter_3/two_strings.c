/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Exercise 3.
*File created: 11/08/2025
*File last modified: 11/08/2025
*Name: two_strings.c
*Purpose: For each of the following pairs of scanf format strings,
		  indicate whether or not the two strings are equivalent
		  If they're not, show how they can be distinguished
		  (a) "%d" versus " %d"
		  (b) "%d-%d-%d" versus "%d -%d -%d"
		  (c) "%f" versus "%f "
		  (d) "%f,%f" versus "%f %f"
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//a is equivalent
	//b is equivalent
	//c is not equivalent, hangs until another character is entered
	//d is equivalent 
	float x = 0.0f;
	float y = 0.0f;
	scanf("%f %f", &x, &y);
	printf("%f %f\n", x, y);
	return 0;
}