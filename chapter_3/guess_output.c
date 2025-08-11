/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Exercise 4.
*File created: 11/08/2025
*File last modified: 11/08/2025
*Name: guess_output.c
*Purpose: Suppose that we call scanf as follows:
		  scanf("%d%f%d", &i, &x, &j);
		  If the user enters
		  10.3 5 6
		  what will be the values of i, x and j after the call? (Assume
		  that i and j are int variables and x is a float variable)
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		scanf will see the 10 followed by a . which cannot be an int, so
		it puts the 10 into i, sees .3 next, sees a whitespace after so it knows
		that the float ended, puts 0.300000 into x, looks for an int, ignores all
		whitespaces as always, sees 5, has only one format slot free, so takes 5
		and puts it into j, the 6 will either not be read at all, or read and put
		back into place for the next scanf/input to use, meaning 6 will be definitely
		ignored and not saved anywhere
	*/
	int i = 0;
	int j = 0;
	float x = 0.0f;
	scanf("%d%f%d", &i, &x, &j);
	printf("%d\n%f\n%d\n", i, x, j);
	return 0;
}