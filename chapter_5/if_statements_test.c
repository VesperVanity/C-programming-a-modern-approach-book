/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 1.
*File created: 15/08/2025
*File last modified: 18/08/2025
*Name: if_statement_test.c
*Purpose: The following program fragments illustrate the relational and
		  equality operators
		  Show the output produced by each, assuming that
		  i, j and k are int variables
		  (a) i = 2; j = 3;
		  	  k = i * j == 6;
		  	  printf("%d", k);
		  (b) i = 5; j = 10; k = 1;
		  	  printf("%d", k > i < j);
		  (c) i = 3; j = 2; k = 1;
		  	  printf("%d", i < j == j < k);
		  (d) i = 3; j = 4; k = 5;
		  	  printf("%d", i % j + i < k);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		(a) output is 1
		(b) output is 1
		(c) output is 1
		(d) output is 0
	*/

	int i = 0, j = 0, k = 0;

	i = 3; j = 4; k = 5;
	printf("%d", i % j + i < k);

	return 0;
}