/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Project 2.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: item_purchase.c
*Purpose: Write a program that formats product information entered by the user
		  A session with the program should look like this:
		  Enter item number: 583
		  Enter unit price: 13.5
		  Enter purchase date (mm/dd/yyyy) : 10/24/2010
		  Item			Unit			Purchase
		  				Price			Date
		  583			$  13.50		10/24/2010
		  The item number and date should be left justified; the unit price should
		  be right justified
		  Allow dollar amounts up to $9999.99
		  Hint: Use tabs to line up the columns
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter item number: ");
	int item_number = 0;
	scanf("%d", &item_number);

	printf("%s", "Enter unit price: ");
	float unit_price = 0.0f;
	scanf("%f", &unit_price);

	printf("%s", "Enter purchase date (mm/dd/yyyy) : ");
	int month = 0, day = 0, year = 0;
	scanf("%d/%d/%d", &month, &day, &year);

	printf("%s\t\t\t%s\t\t\t%s\n", "Item", "Unit", "Purchase");
	printf("\t\t\t%s\t\t\t%s\n", "Price", "Date");
	printf("%-d\t\t\t$%7.2f\t\t%-d/%-d/%-d\n", item_number, unit_price, month, day, year);

	return 0;
}