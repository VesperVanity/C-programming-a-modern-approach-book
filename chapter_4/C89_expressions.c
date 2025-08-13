/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 3.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: C89_expressions.c
*Purpose: What is the value of each of the following expressions in C89?
		  (Give all possible values if an expression may have more than one value)
		  (a) 8 / 5
		  (b) -8 / 5
		  (c) 8 / -5
		  (d) -8 / - 5
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		(a) is 1
		(b) is -1
		(c) is -1
		(d) is 1
	*/

	int exp_1 = 8;
	int exp_2 = -5;

	printf("%d\n", exp_1 / exp_2);

	return 0;
}