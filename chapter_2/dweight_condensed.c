/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Exercise 3.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: dweight_condensed
*Purpose: Condense the dweight.c program by (1) replacing the assignments to height,
		  length, and width with initializers and (2) removing the weight variable,
		  instead calculating (volume + 165) / 166 within the last printf
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int length = 12;
	int width = 10;
	int height = 8;
	int volume = length * width * height;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
	
	return 0;
}