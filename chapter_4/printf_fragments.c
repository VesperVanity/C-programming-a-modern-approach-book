/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 1.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: printf_fragments.c
*Purpose: Show the output produced by each of the following program fragments
		  Assume that i, j, and k are int variables
		  (a) i = 5; j = 3;
		  	  printf("%d %d", i / j, i % j);
		  (b) i = 2; j = 3;
		  	  printf("%d", (i + 10) % j);
		  (c) i = 7; j = 8; k = 9;
		      printf("%d", (i + 10) % k / j);
		  (d) i = 1; j = 2; k = 3;
		  	  printf("%d", (i + 5) % (j + 2) / k);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//(a) output is 1 2
	//(b) output is 0
	//(c) output is 1
	//(d) output is 0

	int i = 0, j = 0, k = 0;

	i = 1;
	j = 2; 
	k = 3;

	printf("%d", (i + 5) % (j + 2) / k);
	
	return 0;
}
