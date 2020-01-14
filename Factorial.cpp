/*******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Assessing Recursion Performance
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 11/26/2019
 *****************************************************************************/
#include "myheader.h"
/******************************************************************************
 * FUNCTION Factorial
 * ____________________________________________________________________________
 * This function will calculate the factorial using the Recursive Case and
 * Iteration Case.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the factorial of the number the user inputs.
 ******************************************************************************/
unsigned long long int factorialR(unsigned long long int num) // CALC - user input
{
	if (num == 0)
		return 1;
	else
		return num * factorialR(num - 1);
}

unsigned long long int factorialI(int num) // CALC - user input
{
	unsigned long long int fact = 1;
	int i;
	for (i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	return fact;

}
