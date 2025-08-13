/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 10.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: MOOORE_program_fragments.c
*Purpose: Show the output produced by each of the following program fragments
		  Assume that i and j are int variables
		  (a) i = 6;
		  	  j = i += 1;
			  printf("%d %d", i, j);
		  (b) i = 5;
		  	  j = (i -= 2) + 1;
		  	  printf("%d %d", i, j);
		  (c) i = 7;
		  	  j = 6 + (i = 2.5);
		  	  printf("%d %d", i, j);
		  (d) i = 2; j = 8;
		  	  j = (i = 6) + (j = 3);
		  	  printf("%d %d", i, j);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//(a) i is 7, j is 7
	//(b) i is 3, j is 4
	//(c) i is 2, j is 8
	//(c) i is 6, j is 9

	int i = 0, j = 0;
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d", i, j);

	return 0;
}