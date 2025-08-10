/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Project 4.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: money_plus_taxes.c
*Purpose: Write a program that asks the user to enter a dollars-and-cents
		  amount, then displays the amount with 5% taxes added
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter amount in dollars and cents to compute taxes: ");
	float user_money = 0.0f;
	scanf("%f", &user_money);

	float tax_rate = 5.0f;
	float tax_total_amount = (tax_rate / user_money) * 100;
	float money_total = user_money + tax_total_amount;
	printf("%s%.2f\n", "With taxes added: ", money_total);

	return 0;
}