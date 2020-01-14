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
 * FUNCTION PrinterHeader
 * ____________________________________________________________________________
 * This function receives an assignment name, type and number then
 * 		outputs the appropriate class heading. asType is defaulted to Lab
 * 		as there are more labs than Assignments.
 * 		==> returns nothing - This will output the class heading.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  asName : Assignment Name
 * 	  			  asNum  : Assignment Number
 *				  asType : Assignment Type ==> THIS SHOULD CONTAIN:
 *				  							   'L' for Labs
 *				  							   'A' for Assignments
 *
 * POST-CONDITIONS
 * 	  This function will output the class heading.
 *
 ******************************************************************************/
string PrinterHeader(string asName,   // IN - Assignment Name
		int asNum ,      // IN - Assignment Number
		char asType)     // IN - Assignment Type ('L' = Lab,
//                       'A' = Assignment)
{
	ostringstream output;

	output << left;
	output << "*****************************************************\n";
	output << "*  PROGRAMMED BY : Suhyr Hasan\n";
	output << "*  " << setw(14) << "STUDENT IDs" << ": 1022520\n";
	output << "*  " << setw(14) << "CLASS"	     <<": CS1B - MW - 7:30pm - 9:50pm\n";
	output << "*  " ;

	// PROCESSING - This will adjust setws and format appropriately based
	//              based on if this is a lab 'L' or assignment.

	if(toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output<< asNum << ": " << asName << endl;
	output << "*****************************************************\n";
	output << right;

	return output.str();
}
