/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 7.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: print_17_-17.c
*Purpose: What does the following statement print if i has the value 17?
		  What does it print if i has the value -17?
		  printf("%d\n", i >= 0 ? i : -i);
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//i = 17 prints the first expression of the ternary operator since i >= 0 is true,
	//so it prints positive i, while i = -17 is prints -i, the third operand of the
	//ternary operator, since i >= 0 is false, which prints 17, not -17 to the terminal,
	//because unary minus plus unary minus creates plus

	int i = -17;

	printf("%d\n", i >= 0 ? i : -i);
	
	return 0;
}