/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 12.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: malevolent_KITCHEN_program_fragments.c
*Purpose: Show the output produced by each of the following program fragments
		  Assume that i and j are int variables
		  (a) i = 5;
		  	  j = ++i * 3 - 2;
			  printf("%d %d", i, j);
		  (b) i = 5; 
		  	  j = 3 - 2 * i++;
		  	  printf("%d %d", i, j);
		  (c) i = 7; 
		      j = 3 * i-- + 2;
		  	  printf("%d %d", i, j);
		  (d) i = 7; 
		      j = 3 + --i * 2;
		  	  printf("%d %d", i, j); 
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//(a) i is 6, j is 16
	//(b) i is 6, j is -7
	//(c) i is 6, j is 23
	//(c) i is 6, j is 15

	int i = 0, j = 0;

	i = 7; 
	j = 3 + --i * 2;
	printf("%d %d", i, j);

	return 0;
}