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
 * FUNCTION Fibonacci
 * ____________________________________________________________________________
 * This function will calculate the fibonacci series using the Recursive Case
 * and Iteration Case.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the fibonacci series of the number the user
 * 	  inputs.
 ******************************************************************************/
int fibonacciR(int n) // CALC - user input
{
	if (n <= 1)
		return n;
	return fibonacciR(n-1) + fibonacciR(n-2);
}

void fibonacciI(int n) // CALC - user input
{
	int num1 = 0, num2 = 1, num3 = 0;
	for (int i = 0; i < n; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}

}
