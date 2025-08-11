/*
*C Programming: A Modern Approach - K.N.King
*Chapter 2 - C Fundamentals - Project 8.
*File created: 11/08/2025
*File last modified: 11/08/2025
*Name: monthly_payments.c
*Purpose: Write a program that calculates the remaining balance on a loan after the
	      first, second and third monthly payments
	      Display each balance with two digits after the decimal poin
	      Hint: Each month, the balance is decreased by the amount of the payment,
	      but increased by the balance times the monthly interest rate
	      To find the monthly interest rate, convert the interest entered by
	      the user to a percentage and divide it by 12
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter amount of loan: ");
	float user_loan = 0.0f;
	scanf("%f", &user_loan);

	printf("%s", "Enter interest rate: ");
	float user_interest_rate = 0.0f;
	scanf("%f", &user_interest_rate);

	printf("%s", "Enter monthly payment: ");
	float user_monthly_payment = 0.0f;
	scanf("%f", &user_monthly_payment);

	float current_balance = 0.0f;
	current_balance = user_loan - user_monthly_payment;
	printf("%f\n", current_balance);

	float monthly_interest_rate = user_interest_rate / user_loan * 100 / 12;
	printf("%f\n", monthly_interest_rate);

	float first_monthly_rate = 0.0f;
	first_monthly_rate = current_balance;
	first_monthly_rate += current_balance * monthly_interest_rate;

	printf("%s%.2f\n", "Balance remaining after first payment: $", first_monthly_rate);

	return 0;
}