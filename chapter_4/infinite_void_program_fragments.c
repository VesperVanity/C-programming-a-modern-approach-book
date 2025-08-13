/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 11.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: infinite_void_program_fragments.c
*Purpose: Show the output produced by each of the following program fragments
		  Assume that i, j, and k are int variables
		  (a) i = 1;
		  	  printf("%d ", i++ - 1);
			  printf("%d", i);
		  (b) i = 10; j = 5;
		  	  printf("%d ", i++ - ++j);
			  printf("%d %d", i, j);
		  (c) i = 7; j = 8;
		  	  printf("%d", i++ - --j);
			  printf("%d %d", i, j);
		  (d) i = 3; j = 4; k = 5;
		  	  printf("%d", i++ - j++ + --k);
			  printf("%d %d %d", i, j, k);  
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//(a) first i is 0, second i is 2
	//(b) first expression is 4, i is 11, j is 6
	//(c) first expression is 0 , i 8, j is 7 
	//(c) first expression is 3, i is 4, j is 5, k is 4

	int i = 0, j = 0, k = 0;

	i = 3;
	j = 4; 
	k = 5;
	
	printf("%d", i++ - j++ + --k);
	printf("%d %d %d", i, j, k); 

	return 0;
}