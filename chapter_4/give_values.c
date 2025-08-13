/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 15.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: give_values.c
*Purpose: Give the values of i and j after each of the following expression
		  statements has been executed
		  (Assume that i has the value 1 initially and j has the value 2)
		  (a) i += j;
		  (b) i--;
		  (c) i * j / i;
		  (d) i % ++j;
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;
	/*
		i is 1, and j 2 is initially
		after (a) i will be 3
		(a) i += j;
		after (b) i will be 2
		(b) i--;
		after (c) i will be 2 again
		(c) i * j / i;
		after (d) i will be 2;
		(d) i % ++j;
	*/
	printf("%d\n", i);
	i += j;
	printf("%d\n", i);
	i--;
	printf("%d\n", i);
	i = i * j / i;
	printf("%d\n", i);
	i = i % ++j;
	printf("%d\n", i);
	

	return 0;
}