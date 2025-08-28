/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Project 4.
*File created: 27/08/2025
*File last modified: 28/08/2025
*Name: simple_beaufort_scale.c
*Purpose: Here's a simplified version of the Beaufort scale, which is used to 
		  estimate wind force:
		  Speed(knots)		Description
		  Less than 1		Calm
		  1-3				Light air
		  4-27				Breeze
		  28-47				Gale
		  48-63				Storm
		  Above 63			Hurricane
		  Write a program that asks the user to enter a wind speed (in knots), 
		  then displays the corresponding description
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter wind speed in knots: ");
	int wind_speed_input = 0;
	scanf("%d", &wind_speed_input);

	printf("%s\t%s\n", "Speed(knots)", "Description");

	if(wind_speed_input < 1)
		printf("%s\t%s\n", "Less than 1", "Calm");
	else if(wind_speed_input >= 1 && wind_speed_input <= 3)
		printf("%s\t%s\n", "1-3", "Light air");
	else if(wind_speed_input >= 4 && wind_speed_input <= 27)
		printf("%s\t%s\n", "4-27", "Breeze");
	else if(wind_speed_input >= 28 && wind_speed_input <= 47)
		printf("%s\t%s\n", "28-47", "Gale");
	else if(wind_speed_input >= 48 && wind_speed_input <= 63)
		printf("%s\t%s\n", "48-63", "Storm");
	else if(wind_speed_input > 63)
		printf("%s\t%s\n", "Above 63", "Hurricane");

	return 0;
}