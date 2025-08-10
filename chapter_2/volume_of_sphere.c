/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Project 2. - 3.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: volume_of_sphere.c
*Purpose: 2. Write a program that computes the volume of a sphere with a 10-meter radius,
		  	 using the formula v = 4/3PI r * cubed
		  	 Write the fraction 4/3 as 4.0f/3.0f (Try writing it as 4/3, what happens?)
		  	 Hint: C doesn't have an exponentiation operator, so you will need to
		  	 multiply r by itself twice to compute r cubed
		  3. Modify the program of project 2 so that is prompts the user to enter
		  	 the radius of the sphere
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "enter radius to compute volume of sphere: ");
	int radius = 10;
	scanf("%d", &radius);
	int radius_cubed = radius * radius * radius;
	float PI = 3.14f;
	float formula = (4.0f / 3.0f) * PI * radius_cubed;

	printf("%s%.2f\n", "volume of sphere: ", formula);

	return 0;
}