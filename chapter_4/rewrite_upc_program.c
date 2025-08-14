/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Project 5.
*File created: 14/08/2025
*File last modified: 14/08/2025
*Name: rewrite_upc_program.c
*Purpose: Rewrite the upc.c program of section 4.1 so that the user enters 11
		  digits at one time, instead of entering one digit, then five digits,
		  and then another five digits
		  Enter the first 11 digits of a UPC: 01380015173
		  Check digit: 5
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

/* upc.c (Chapter 4, page 57) */
/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("%s", "Enter UPC (11 digits) :");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
 
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}