/*******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Assessing Recursion Performance
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 11/26/2019
 *****************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#include<sstream>
#include<string>
#include<chrono>
#include<ctime>
using namespace std;
using namespace std::chrono; // using namespace std::chrono

string PrinterHeader(string asName, int asNum , char asType);
/**************************************************************************
 * Function PrinterHeader - This function receives an assignment name, type
 * 						    and number then outputs the appropriate class
 * 						    heading. asType is defaulted to Lab as there
 * 						    are more labs than Assignments. ==> returns
 * 						    nothing - This will output the class heading.
 *************************************************************************/

unsigned long long int factorialR(unsigned long long int num);
/**************************************************************************
 * Function factorialR - This function will calculate the factorial using
 *                       the Recursive Case..
 **************************************************************************/

unsigned long long int factorialI(int num);
/**************************************************************************
 * Function factorialI - This function will calculate the factorial using
 *                       the Iteration Case.
 **************************************************************************/

int fibonacciR(int n);
/**************************************************************************
 * Function fibonacciR - This function will calculate the fibonacci series
 *                       using the Recursive Case.
 **************************************************************************/

void fibonacciI(int n);
/**************************************************************************
 * Function fibonacciI - This function will calculate the fibonacci series
 *                       using the Iteration Case.
 **************************************************************************/
#endif /* MYHEADER_H_ */
