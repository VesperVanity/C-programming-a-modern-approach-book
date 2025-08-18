/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 10.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: switch_case_fragment.c
*Purpose: What output does the following program fragment produce?
		  (Assume that i is an integer variable)
		  i = 1;
		  switch (i % 3)
		  {
			case 0: printf("zero");
			case 1: printf("one");
			case 2: printf("two");
		  }
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int i = 0;

	//No break statements in the switch cases means it will pick the correct case
	//and fall through to the next case regardless of the case value, and triggers it
	//so print for this here is "onetwo", even if "case 2: printf("two")" would 
	//be any other case value like "case 12495:"
	
	i = 1;
	  switch (i % 3)
	  {
		case 0: printf("zero");
		case 1: printf("one");
		case 12495: printf("two");
	  }

	return 0;
}