/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 8.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: complicated_if.c
*Purpose: The following if statement is unnecessarily complicated
		  Simplify it as much as possible
		  (Hint: The entire statement can be replaced by a single assignment)
		  if(age >= 13)
		  	if(age <= 19)
		  		teenager = true;
		  	else
		  		teenager = false;
		  	else if (age < 13)
		  		teenager = false;
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0;
	bool teenager = false;

	age = 20;

	//Never thought about using the relational and logical operators for a
	//bool assignment, clever
	teenager = age >= 13 && age <= 19;
	printf("%d\n", teenager);

	return 0;
}