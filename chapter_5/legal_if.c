/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 5.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: legal_if.c
*Purpose: Is the following if statement legal?
		  if (n >= 1 <= 10)
		  	printf("n is between 1 and 10\n");
		  If so, what does it do when n is equal to zero?
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		The if statement is legal yes, but not logical, since it only returns
		one value, and checks for both cases, creating an endless "always true"
		logical expression
		If you want to check if n is between the values of 1 and 10, you can write:

		if(n >= 1 && n <= 10)
		
		which makes it only true when both relational expressions are correct
	
	int n = 0;
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");
	*/
	int n = 11;
	if(n >= 1 && n <= 10)
	{
		printf("n is between 1 and 10\n");
	}

	return 0;
}