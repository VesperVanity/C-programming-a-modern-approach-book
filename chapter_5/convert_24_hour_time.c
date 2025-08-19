/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Project 2.
*File created: 19/08/2025
*File last modified: 19/08/2025
*Name: convert_24_hour_time.c
*Purpose: Write a program that asks the user for a 24-hour time, then displays the
		  time in 12-hour form:
		  Enter 24-hour time: 21:11
		  Equivalent 12-hour time: 9:11 PM
		  Be careful not to display 12:00 as 0:00
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter 24-hour time (21:11): ");
	int user_hour_time = 0, user_minute_time = 0;
	scanf("%d:%d", &user_hour_time, &user_minute_time);

	int converted_hour_time = 0;
	if(user_hour_time == 12 && user_minute_time == 00)
		converted_hour_time = 12;

	if(user_hour_time <= 12)
		converted_hour_time = user_hour_time;
	else
		converted_hour_time = user_hour_time - 12;

	char am_or_pm = ' ';
	if(user_hour_time > 12)
		am_or_pm = 'P';
	else
		am_or_pm = 'A';
	
	printf("%s%2.2d:%2.2d %c%c\n", "Equivalent 12-hour time: ", converted_hour_time, user_minute_time, am_or_pm, 'M');

	return 0;
}