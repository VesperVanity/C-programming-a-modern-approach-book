/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Project 7.
*File created: 10/08/2025
*File last modified: 10/08/2025
*Name: pay_with_bills.c
*Purpose: Write a program that asks the user to enter a U.S. dollar amount
		  and then shows how to pay that amount using the smallest number 
		  of $20, $10, $5 and %1 bills
		  Hint: Divide the amount by 20 to determine the number of $20 bills
		  needed, and then reduce the amount by the total value of the $20 bills
		  Repeat for the other bill sizes
		  Be sure to use integer values throughout, not floating-point numbers
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter U.S. dollar amount: ");
	int user_money = 0;
	scanf("%d", &user_money);

	int twenty_dollar_bills_value = 20;
	int twenty_dollar_bills_amount = 0;

	int ten_dollar_bills_value = 10;
	int ten_dollar_bills_amount = 0;

	int five_dollar_bills_value = 5;
	int five_dollar_bills_amount = 0;

	int one_dollar_bills_value = 1;
	int one_dollar_bills_amount = 0;

	twenty_dollar_bills_amount = user_money / twenty_dollar_bills_value;
	user_money -= twenty_dollar_bills_value * twenty_dollar_bills_amount;

	ten_dollar_bills_amount = user_money / ten_dollar_bills_value;
	user_money -= ten_dollar_bills_value * ten_dollar_bills_amount;

	five_dollar_bills_amount = user_money / five_dollar_bills_value;
	user_money -= five_dollar_bills_value * five_dollar_bills_amount;

	one_dollar_bills_amount = user_money / one_dollar_bills_value;
	user_money -= one_dollar_bills_value * one_dollar_bills_amount;

	printf("%s%d\n", "$20 bills: ", twenty_dollar_bills_amount);
	printf("%s%d\n", "$10 bills: ", ten_dollar_bills_amount);
	printf("%s%d\n", " $5 bills: ", five_dollar_bills_amount);
	printf("%s%d\n", " $1 bills: ", one_dollar_bills_amount);

	return 0;
}