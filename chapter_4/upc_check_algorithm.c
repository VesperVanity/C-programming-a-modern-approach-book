/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 7.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: upc_check_algorithm.c
*Purpose: The algorithm for computing the UPC check digit ends with the following
		  steps:
		  Subtract 1 from the total
		  Compute the remainder when the adjusted total is divided by 10
		  Subtract the remainder from 9
		  It's tempting to try to simplify the algorithm by using these steps instead:
		  Compute the remainder when the total is divided by 10
		  Subtract the remainder from 10
		  Why doesn't this technique work?
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		Doesn't work because the entire algorithm relies on subtracting 1 in a singular
		step in order to prepare the UPC number for accurate representation of the last
		two steps of the algorithm, the result would be entirely different, and does not
		count as a shortcut/simplification, since it does something entirely different,
		and if it does something different than the original algorithm, it is not a
		better version of the same algorithm, but a different algorithm doing the
		wrong thing, breaking the concept of structure into nothingness
	*/

	return 0;
}