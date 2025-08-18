/*
*C Programming: A Modern Approach - K.N.King
*Chapter 5 - Selection Statements - Exercise 9.
*File created: 18/08/2025
*File last modified: 18/08/2025
*Name: ifs_comparison.c
*Purpose: Are the following if statements equivalent?
		  If not, why not?
		  if (score >= 90)				
		  	printf("A");
		  else if (score >= 80) 
		  	printf("B");
		  else if (score >= 70)
		  	printf("C");
		  else if (score >= 60)
		  	printf("D");
		  else
		  	printf("F");
		 ----------------------------
		  if (score < 60)
		  	printf("F");
		  else if (score < 70)
		  	printf("D");
		  else if (score < 80)
		  	printf("C");
		  else if (score < 90)
		  	printf("B");
		  else
		  	printf("A");
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		The if statements are equivalent in the logical sense, however, probably
		not in the practical sense, since the chances are higher that scores of
		students would score higher instead of lower on average, so the second 
		cascading if checks have to run and check more cases per score of student,
		while the first one finds higher scores earlier

		I assume though that this was not the meaning behind "equivalent" here, so
		my answer wil be: Yes, they are identical and do the job correctly
	*/

	int score = 59;


	if (score >= 90)				
	  	printf("A");
	  else if (score >= 80) 
	  	printf("B");
	  else if (score >= 70)
	  	printf("C");
	  else if (score >= 60)
	  	printf("D");
	  else
	  	printf("F");

	if (score < 60)
	  	printf("F");
	  else if (score < 70)
	  	printf("D");
	  else if (score < 80)
	  	printf("C");
	  else if (score < 90)
	  	printf("B");
	  else
	  	printf("A");

	return 0;
}