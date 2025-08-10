/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Project 5. - 6.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: polynomial.c
*Purpose: 5. Write a program that asks the user to enter a value for x and then
		     displays the value of the following polynomial:
		     3x>5 + 2x>4 - 5x>3 - x>2 + 7x - 6
		  6. Modify the program of project 5 so that the polynomial is evaluated
		  	 using the following formula:
		  	 ((((3x + 2)x - 5)x - 1)x + 7)x - 6
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter an integer for the polynomial: ");
	int x = 0;
	scanf("%d", &x);

	int power_of_5 = x * x * x * x * x;
	int power_of_4 = x * x * x * x;
	int power_of_3 = x * x * x;
	int power_of_2 = x * x;

	int polynomial_project_5 = 3 * power_of_5 + 2 * power_of_4 - 5 * power_of_3 - power_of_2 + 7 * x - 6;

	int polynomial_project_6 = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	int result_1 = (3 * x) + 2;
	int result_2 = result_1 * x - 5;
	int result_3 = result_2 * x - 1;
	int result_4 = result_3 * x + 7;
	int result_5 = result_4 * x - 6;

	printf("%s%d\n", "Project 5: ", polynomial_project_5);
	printf("%s%d\n", "Project 6: ", polynomial_project_6);
	printf("%s%d\n", "One by one computation: ", result_5);

	return 0;
}