/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 2.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: i_and_j.c
*Purpose: If i and j are positive integers, does (-i) / j always have the same value
		  as - (i / j)?
		  Justify your answer
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*	
	 yes, since in the first expression the positive integer i gets turned into a
	 negative integer with the unary minus operator since it takes precedence over
	 everything else because of the parentheses, so now a negative integer is divided
	 by j, creating a negative integer either way, unless the result would be flat zero,
	 which cannot ever be the case since that would be undefined behavior,
	 and in the second expression, (i / j) gets computed first, again because of 
	 parentheses, calculating the expression, and after, the unary minus operator
	 gets used on the result, turning the current positive integer into a negative one
	*/

	int i = 100;
	int j = 10;

	printf("%d\n", (-i) / j);
	printf("%d\n", - (i / j));
	return 0;
}