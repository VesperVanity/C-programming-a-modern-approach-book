/*
*C Programming: A Modern Approach - K.N.King
*Chapter 4 - Expressions - Exercise 13.
*File created: 13/08/2025
*File last modified: 13/08/2025
*Name: increment_op_question.c
*Purpose: Only one of the expressions ++i and i++ is exactly the same as
		  (i += 1); which is it?
		  Justify your answer
*Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	/*
		Must be prefix ++i because the expression here (i += 1) is in parentheses,
		so it must happen at highest precedence
		Or normally, the expression i += 1 is a compound assignment, which is just like
		the simple assignment operator at the lowest precedence of all operators, in that
		case it would be i++, happening later, not instantly.
		I assume it's ++i, especially minimum in this case here with the parentheses
		included
	*/
	return 0;
}