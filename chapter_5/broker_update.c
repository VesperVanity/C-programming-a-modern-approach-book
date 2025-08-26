/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Project 3.
*File created: 27/08/2025
*File last modified: 27/08/2025
*Name: broker_update.c
*Purpose: Modify the broker.c program of section 5.2 by making both of the following
		  changes:
		  (a) Ask the user to enter the number of shares and the price per share,
		  	  instead of the value of the trade
		  (b) Add statements that compute the commission charged by a rival broker
		  	  ($33 plus 3 cent per share for fewer than 2000 shares, $33 plus 2 cent
		  	  per share for 2000 shares or more)
		  	  Display the rival's commission as well as the commission charged
		  	  by the original broker
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

/* broker.c (Chapter 5, page 81) */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  float commission, value;

  printf("Enter value of trade: ");
  scanf("%f", &value);

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission: $%.2f\n", commission);

  return 0;
}