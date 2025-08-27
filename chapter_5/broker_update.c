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
  float commission = 0.0f, rival_commission = 0.0f;

  printf("%s", "Enter the number of shares: ");
  int number_of_shares = 0;
  scanf("%d", &number_of_shares);

  printf("%s", "Enter the price per share: ");
  float price_per_share = 0.0f;
  scanf("%f", &price_per_share);

  if (number_of_shares < 2000)
    rival_commission = price_per_share + 0.03f * number_of_shares;
  else if (number_of_shares >= 2000)
    rival_commission = price_per_share + 0.02f * number_of_shares;
  
  commission = price_per_share + 0.00f * number_of_shares;

  printf("Commission: $%.2f\n", commission);
  printf("Rival's Commission: $%.2f\n", rival_commission);

  return 0;
}