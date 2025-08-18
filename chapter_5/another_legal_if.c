/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 6.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: another_legal_if.c
*Purpose: Is the following if statement legal?
		  if (n == 1 - 10)
		  	printf("n is between 1 and 10\n");
		  If so, what does it do when n is equal to 5?
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		The if statement is legal yes, but not logical, the expression 1 - 10 will
		always be -9, and giving n the value -9 to printf "n is between 1 and 10"
		doesn't make sense
	*/
	int n = -9;
	if (n == 1 - 10)
		printf("n is between 1 and 10\n");
	return 0;
}