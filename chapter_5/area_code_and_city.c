/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 11.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: area_code_and_city.c
*Purpose: The following table shows telephone area codes in the state of Georgia
		  along with the largest city in each area:
		  Area code 	Major city
		  	 229		Albany
		  	 404		Atlanta
		  	 470		Atlanta
		  	 478		Macon
		  	 678		Atlanta
		  	 706		Columbus
		  	 762		Columbus
		  	 770		Atlanta
		  	 912		Savannah
		  Write a switch statement whose controlling expression is the variable
		  area_code
		  If the value of area_code is in the table, the switch statement will print
		  the corresponding city name
		  Otherwise, the switch statement will display the message "Area code 
		  not recognized"
		  Use the techniques discussed in section 5.3 to make the switch statement
		  as simple as possible
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	int area_code = 913;

	printf("%s\t%s\n", "Area code", "Major city");

	//Simplest form, but not concise
	switch (area_code)
	{
	case 229: printf("%d\t\t%s\n", area_code, "Albany");
		break;
	case 404: printf("%d\t\t%s\n", area_code, "Atlanta");
		break;
	case 470: printf("%d\t\t%s\n", area_code, "Atlanta");
		break;
	case 478: printf("%d\t\t%s\n", area_code, "Macon");
		break;
	case 678: printf("%d\t\t%s\n", area_code, "Atlanta");
		break;
	case 706: printf("%d\t\t%s\n", area_code, "Columbus");
		break;
	case 762: printf("%d\t\t%s\n", area_code, "Columbus");
		break;
	case 770: printf("%d\t\t%s\n", area_code, "Atlanta");
		break;
	case 912: printf("%d\t\t%s\n", area_code, "Savannah");
		break;
	default: printf("%s\n", "Area code not recognized");
		break;
	}

 	//--------------------------------------------------------

	//More concise form
	switch (area_code)
	{
	case 229: printf("%d\t\t%s\n", area_code, "Albany");
		break;
	case 404:
	case 470:
	case 678:
	case 770: printf("%d\t\t%s\n", area_code, "Atlanta");
		break;
	case 478: printf("%d\t\t%s\n", area_code, "Macon");
		break;
	case 706:
	case 762: printf("%d\t\t%s\n", area_code, "Columbus");
		break;
	case 912: printf("%d\t\t%s\n", area_code, "Savannah");
		break;
	default: printf("%s\n", "Area code not recognized");
		break;
	}

	return 0;
}