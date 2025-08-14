/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Project 4.
*File created: 14/08/2025
*File last modified: 14/08/2025
*Name: octal_integer.c
*Purpose: Write a program that reads an integer entered by the user and displays it
		  in octal (base 8):
		  Enter a number between 0 and 32767: 1953
		  In octal, your number is: 03641
		  The output should be displayed using five digits, even if fewer digits are
		  sufficient
		  Hint: to convert the number to octal, first divide it by 8, the remainder is
		  the last digit of the octal number (1, in this case)
		  Then divide the original number by 8 and repeat the process to arrive at the
		  next-to-last digit
		  (printf is capable of displaying numbers in base 8, as we'll see in chapter 7
		  so there's actually an easier way to write this program)
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a number between 0 and 32767: ");
	int user_number = 0;
	scanf("%d", &user_number);

	//digits are in the exact opposite order, first_digit = last_digit and so on
	int first_digit = user_number % 8;
	int first_divide = user_number / 8;

	int second_digit = first_divide % 8;
	int second_divide = first_divide / 8;

	int third_digit = second_divide % 8;
	int third_divide = second_divide / 8;

	int fourth_digit = third_divide % 8;
	int fourth_divide = third_divide / 8;

	int fifth_digit = fourth_divide % 8;

	printf("%d%d%d%d%d\n", fifth_digit ,fourth_digit, third_digit, second_digit, first_digit);

	return 0;
}