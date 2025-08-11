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
	float monthly_interest_rate = (user_interest_rate / 100) / 12;
	current_balance = user_loan - user_monthly_payment;
	current_balance += user_loan * monthly_interest_rate;

	float first_rate_balance = current_balance;
	float second_rate_balance = (first_rate_balance - user_monthly_payment) + (first_rate_balance * monthly_interest_rate);
	float third_rate_balance = (second_rate_balance - user_monthly_payment) + (second_rate_balance * monthly_interest_rate);

	printf("%s%.2f\n", "Balance remaining after first payment: $", first_rate_balance);
	printf("%s%.2f\n", "Balance remaining after second payment: $", second_rate_balance);
	printf("%s%.2f\n", "Balance remaining after third payment: $", third_rate_balance);

	return 0;
}