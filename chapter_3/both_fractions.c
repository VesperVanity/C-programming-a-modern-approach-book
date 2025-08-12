/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Project 6.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: both_fractions.c
*Purpose: Modify the addfrac.c program of section 3.2 so that the user enters
		  both fractions at the same time, separated by a plus sign:
		  Enter two fractions separated by a plus sign: 5/6+3/4
		  The sum is: 38/24
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/


/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* addfrac.c (Chapter 3, page 46) */
/* Adds two fractions */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}