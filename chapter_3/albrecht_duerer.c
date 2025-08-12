/*
*C Programming: A Modern Approach - K.N.King
*Chapter 3 - Formatted Input/Output - Project 5.
*File created: 12/08/2025
*File last modified: 12/08/2025
*Name: albrecht_duerer.c
*Purpose: Write a program that asks the user to enter the numbers from 1 - 16
		  (in any order), and then displays the numbers in a 4 by 4 arrangement,
		  followed by the sums of the rows, columns, and diagonals:
		  Enter the number from 1 to 16 in any order:
		  16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

		  16  3  2 13
		   5 10 11  8
		   9  6  7 12
		   4 15 14  1 

		  Row sums: 34 34 34 34
		  Column sums: 34 34 34 34
		  Diagonal sums: 34 34

		  If the row, column and diagonal sums are all the same (as they are in
		  this example), the numbers are said to form a magic square
		  The magic square shown here appears in a 1514 engraving by artist
		  and mathematician Albrecht Duerer (Note that the middle numbers
		  in the last row give the date of the engraving)
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the number from 1 to 16 in any order: ");

	int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;
	int num_5 = 0, num_6 = 0, num_7= 0, num_8 = 0;
	int num_9 = 0, num_10 = 0, num_11 = 0, num_12 = 0;
	int num_13 = 0, num_14 = 0, num_15 = 0, num_16 = 0;

	scanf("%d%d%d%d", &num_1, &num_2, &num_3, &num_4);
	scanf("%d%d%d%d", &num_5, &num_6, &num_7, &num_8);
	scanf("%d%d%d%d", &num_9, &num_10, &num_11, &num_12);
	scanf("%d%d%d%d", &num_13, &num_14, &num_15, &num_16);

	int rows_sum_1 = num_1 + num_2 + num_3 + num_4;
	int rows_sum_2 = num_5 + num_6 + num_7 + num_8;
	int rows_sum_3 = num_9 + num_10 + num_11 + num_12;
	int rows_sum_4 = num_13 + num_14 + num_15 + num_16;

	int column_sum_1 = num_1 + num_5 + num_9 + num_13;
	int column_sum_2 = num_2 + num_6 + num_10 + num_14;
	int column_sum_3 = num_3 + num_7 + num_11 + num_15;
	int column_sum_4 = num_4 + num_8 + num_12 + num_16;

	int diagonal_sum_1 = num_1 + num_6 + num_11 + num_16;
	int diagonal_sum_2 = num_4 + num_7 + num_10 + num_13;

	printf("%2d %2d %2d %2d\n", num_1, num_2, num_3, num_4);
	printf("%2d %2d %2d %2d\n", num_5, num_6, num_7, num_8);
	printf("%2d %2d %2d %2d\n", num_9, num_10, num_11, num_12);
	printf("%2d %2d %2d %2d\n", num_13, num_14, num_15, num_16);

	printf("\n");

	printf("%s%d %d %d %d\n", "Row sums: ", rows_sum_1, rows_sum_2, rows_sum_3, rows_sum_4);
	printf("%s%d %d %d %d\n", "Column sums: ", column_sum_1, column_sum_2, column_sum_3, column_sum_4);
	printf("%s%d %d\n", "Diagonal sums: ", diagonal_sum_1, diagonal_sum_2);

	return 0; 
}