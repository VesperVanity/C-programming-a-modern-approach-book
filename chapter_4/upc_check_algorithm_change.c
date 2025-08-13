/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 8.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: upc_check_algorithm_change.c
*Purpose: Would the upc.c still work if the expression 9 - ((total - 1) % 10) were
		  replaced by (10 - (total % 10)) % 10?
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		Yes, since it expresses the same algorithm needed to evaluate the UPC check
	*/
	int total = 1243523232;
	printf("%d", 9 - ((total - 1) % 10));
	printf("%d", (10 - (total % 10)) % 10);
	return 0;
}