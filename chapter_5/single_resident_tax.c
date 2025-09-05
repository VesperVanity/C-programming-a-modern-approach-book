/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Project 5.
*File created: 28/08/2025
*File last modified: 05/09/2025
*Name: single_resident_tax.c
*Purpose: In one state, single residents are subject to the following income tax:
		  Income			Amount of tax
		  Not over $750		1% of income
		  $750-$2250		$7.50 	 plus 2% of amount over $750
		  $2250-$3750		$37.50 	 plus 3% of amount over $2250
		  $3750-$5250		$82.50   plus 4% of amount over $3750
		  $5250-$7000		$142.50  plus 5% of amount over $5250
		  Over $7000		$230.00  plus 6% of amount over $7000
		  Write a program that asks the user to enter the amount of taxable income,
		  then displays the tax due
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter amount of taxable income: ");
	int user_income = 0;
	scanf("%d", &user_income);

	printf("%s\t\t%s\n", "Income", "Amount of tax");

	if(user_income < 750)
		printf("%s\t%s\n", "Not over $750", "1% of income");
	else if(user_income >= 750 && user_income <= 2250)
		printf("%s\t%s\n", "$750-$2250", "$7.50 	 plus 2% of amount over $750");
	else if(user_income >= 2250 && user_income <= 3750)
		printf("%s\t%s\n", "$2250-$3750", "$37.50 	 plus 3% of amount over $2250");
	else if(user_income >= 3750 && user_income <= 5250)
		printf("%s\t%s\n", "$3750-$5250", "$82.50   plus 4% of amount over $3750");
	else if(user_income >= 5250 && user_income <= 7000)
		printf("%s\t%s\n", "$5250-$7000", "$142.50  plus 5% of amount over $5250");
	else if(user_income > 7000)
		printf("%s\t%s\n", "Over $7000", "$230.00  plus 6% of amount over $7000");

	return 0;
}