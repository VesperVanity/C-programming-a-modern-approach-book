/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 3.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: short_circuit_logical_expressions.c
*Purpose: The following program fragments illustrate the short-circuit behavior
		  of logical expressions
		  Show the output produced by each, assuming that
		  i, j and k are int variables
		  (a) i = 3; j = 4; k = 5;
		  	  printf("%d", i < j || ++j < k);
		  	  printf("%d%d%d", i, j, k);
		  (b) i = 7; j = 8; k = 9;
		  	  printf("%d", i - 7 && j++ < k);
		  	  printf("%d%d%d", i, j, k);
		  (c) i = 7; j = 8; k = 9;
		  	  printf("%d", (i = j) || (j = k));
		  	  printf("%d%d%d", i, j, k);
		  (d) i = 1; j = 1; k = 1;
		  	  printf("%d", ++i || ++j && ++k);
		  	  printf("%d%d%d", i, j, k);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		(a) output is 1 3 4 5
		(b) output is 0 7 8 9
		(c) output is 1 8 8 9
		(d) output is 1 2 1 1
	*/

	int i = 0, j = 0, k = 0;
	i = 1; j = 1; k = 1;
	printf("%d", ++i || ++j && ++k);
	printf("%d%d%d", i, j, k);

	return 0;
}