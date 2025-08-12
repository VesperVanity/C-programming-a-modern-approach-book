/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Exercise 5.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: guess_output_star.c
*Purpose: Suppose that we call scanf as follows:
		  scanf("%f%d%f", &x, &i, &y);
		  If the user enters
		  12.3 45.6 789
		  what will be the values of x, i and y after the call? (Assume
		  that x and y are float variables and i is an int variable)
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*	
		scanf will first see the 12.3 and a new number after, meaning the float is
		correct and puts 12.3 into the first float conversion specifier slot, then 
		start looking for an int, will see the 45.6, stops after seeing the decimal
		point, takes the 45 and stores it into the int con spec slot, now goes back
		and looks for the last con spec slot, which is a float, sees the .6, which
		counts as float, returns and puts it into the last float, therefore the 
		789 int given to scanf will be entirely ignored, since all con spec slots
		are already filled and taken.  
	*/
	float x = 0.0f;
	float y = 0.0f;
	int i = 0;
	scanf("%f%d%f", &x, &i, &y);
	printf("%f\n%d\n%f\n", x, i, y);

	return 0;
}