/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 14.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: supply_parentheses.c
*Purpose: Supply parentheses to show how a C compiler would interpret each of the
		  following expressions:
		  (a) a * b - c * d + e
		  (b) a / b % c / d
		  (c) - a - b + c - + d
		  (d) a * - b / c - d
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		(a) (((a * b) - (c * d)) + e)
		(b) ((a / b) % (c / d))
		(c) ((((- a) - b) + (c - (+ d)))
		(d) (((a * (- b)) / c) - d)
	*/

	return 0;
}