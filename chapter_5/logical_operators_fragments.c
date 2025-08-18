/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 2.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: logical_operators_fragments.c
*Purpose: The following program fragments illustrate the logical operators
		  Show the output produced by each, assuming that
		  i, j and k are int variables
		  (a) i = 10; j = 5;
		  	  printf("%d", !i < j);
		  (b) i = 2; j = 1;
		  	  printf("%d", !!i + !j);
		  (c) i = 5; j = 0; k = -5;
		  	  printf("%d", i && j || k);
		  (d) i = 1; j = 2; k = 3;
		  	  printf("%d", i < j || k);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		(a) output is 1
		(b) output is 1
		(c) output is 1
		(d) output is 1
	*/

	int i = 0, j = 0, k = 0;
	
	i = 1; j = 2; k = 3;
	printf("%d", i < j || k);

	return 0;
}