/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 9.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: more_program_fragments.c
*Purpose: Show the output produced by each of the following program fragments
		  Assume that i, j, and k are int variables
		  (a) i = 7; j = 8;
		  	  i *= j + 1;
		  	  printf("%d %d", i, j);
		  (b) i = j = k = 1;
		  	  i += j += k;
		  	  printf("%d %d %d", i, j, k);
		  (c) i = 1; j = 2; k = 3;
		  	  i -= j -= k;
		  	  printf("%d %d %d", i, j, k);
		  (d) i = 2; j = 1; k = 0;
		  	  i *= j *= k;
		  	  printf("%d %d %d", i, j, k);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//(a) i is 63, j is 8
	//(b) i is 3, j is 2, k is 1
	//(c) i is 3, j is 2, k is 1
	//(d) i is 0, j is 0, k is 0

	int i = 0, j = 0, k = 0;
	i = 2; 
	j = 1; 
	k = 0;
	i *= j *= k;
	printf("%d %d %d", i, j, k);

	return 0;
}