/*******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Assessing Recursion Performance
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 11/26/2019
 *****************************************************************************/
#include "myheader.h"
/*****************************************************************************
 * Assessing Recursion Performance
 * ----------------------------------------------------------------------------
 * This program will provide a menu for the user to choose from.
 *
 * If user selects option 1, the program will calculate the factorial using the
 * recursive method and display the result from each recursive call until the
 * final result is obtained.
 *
 * If user selects option 2, the program calculate the Fibonacci Series using
 * the recursive method and display the result from each recursive call until
 * the final result (series) is obtained.
 *
 * If user selects option 3, the program will calculate the factorial of an int.
 * In this case, the program will run the calculation using both methods,
 * and measure the time used to execute each method and then display the
 * resulting time (in seconds) for each method.
 *
 * If user selects option 4, the program will calculate the the Fibonacci Series
 * of an int. In this case, the program will run the calculation using both methods,
 * and measure the time used to execute each method and then display the
 * resulting time (in seconds) for each method.
 * ----------------------------------------------------------------------------
 *	INPUT:
 *	      option =  The menu option
 *	      n      =  The number the user inputs.
 *
 *	OUTPUT:
 *	       duration  = The amount of time it took the program to calculate
 *	       duration2 = The amount of time it took the program to calculate
 *****************************************************************************/
int main()
{
	// Outputs Header
	cout << PrinterHeader("Assessing Recursion Performance", 4 , 'A');

	int option; // IN - The menu option
	int n;      // IN - The number the user inputs.

	/**************************************************************************
	 * INPUT: Using a while loop the program will display a menu to the user.
	 *        Then it will the ask the user to input their choice. Using an
	 *        If Statement the program will validate the user's input by making
	 *        sure the user input's an in and not a char. After the program
	 *        will use a switch statement.
	 *
	 * Example: MENU OPTIONS
	 *          1.Calculate and Display Factorial of a Number
	 *          2.Calculate and Display Fibonacci Series of a Number
	 *          3.Compare Performance for Factorial Implementations
	 *          4.Compare Performance for Fibonacci Series Implementations
	 *          0.to Exit
	 *          Enter an option (0 to exit):
	 **************************************************************************/
	while(1)
	{
		// MENU OPTION
		cout << "\nMENU OPTIONS" << endl;
		cout << "1 - Calculate and Display Factorial of a Number\n";
		cout << "2 - Calculate and Display Fibonacci Series of a Number\n";
		cout << "3 - Compare Performance for Factorial Implementations\n";
		cout << "4 - Compare Performance for Fibonacci Series Implementations\n";
		cout << "0 - EXIT\n";
		cout << "Enter an option (0 to exit): ";

		//If Statement
		if (!(cin >> option))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\n*** Please input a number between 0 and 4   ****\n";
		}
		else
		{
			switch (option) {
			/************************************************************************
			 * Case 1 : Using the function, factorialR(n), the program will calculate
			 * the factorial using the recursive method and display the result from
			 * each recursive call until the final result is obtained.
			 ***********************************************************************/
			case 1: {
				cout << "Enter a positive integer: ";
				cin >> n;
				cout << "\nFactorial of " << n << " = " << factorialR(n);
				cout << endl << endl;
			} break;
			/***********************************************************************
			 * Case 2 : Using the function,fibonacciR(i), the program calculate the
			 * Fibonacci Series using the recursive method and display the result
			 * from each recursive call until the final result (series) is obtained.
			 ***********************************************************************/
			case 2:{
				cout<<"Enter the number of elements: ";
				cin>>n;
				cout<<"\nFibonacci Series: ";
				int i = 0;
				while(i < n)
				{
					cout << " " << fibonacciR(i);
					i++;
				}
				cout << endl;
				fibonacciI(n);
				cout << endl;
			} break;
			/***********************************************************************
			 * Case 3: Using the functions, factorialR(n) and factorialI(n), the
			 * program will calculate the factorial of an int. In this case, the
			 * program will run the calculation using both methods, and measure the
			 * time used to execute each method and then display the resulting time
			 * (in seconds) for each method.
			 **********************************************************************/
			case 3:{
				cout << setprecision(9) << fixed;
				cout << "Enter a positive integer: ";
				cin >> n;
				cout << "\nFactorial : ";
				int runtime = 10000; // you can mess with this
				int run = runtime;
				high_resolution_clock::time_point t1 = high_resolution_clock::now();
				while( runtime > 0)
				{
					factorialR(n);
					runtime--;
				}
				high_resolution_clock::time_point t2 = high_resolution_clock::now();
				auto duration = duration_cast<microseconds>( t2 - t1 ).count();
				cout << fixed << endl << "It took the program "
					 << (duration*(.00001)/run) << " seconds to execute (Recursive)";

				runtime = run;
				high_resolution_clock::time_point t3 = high_resolution_clock::now();
				while( runtime > 0)
				{
					factorialI(n);
					runtime--;
				}
				high_resolution_clock::time_point t4 = high_resolution_clock::now();
				auto duration2 = duration_cast<microseconds>( t4 - t3 ).count();
				cout << fixed << endl << "It took the program "
						<< (duration2*(.00001)/run) << " seconds to execute "
						<< "(with iterations)\n\n";
			}break;
			/***********************************************************************
			 * Case 4: Using the functions,fibonacciR(n) and fibonacciI(n), the
			 * program will calculate the the Fibonacci Series of an int. In this
			 * case, the program will run the calculation using both methods, and
			 * measure the time used to execute each method and then display the
			 * resulting time (in seconds) for each method
			 **********************************************************************/
			case 4: {
				//
				cout << setprecision(9) << fixed;
				cout << "Enter the number of elements: ";
				cin >> n;
				cout <<"\nFibonacci Series: ";
				int runtime = 10000; // you can mess with this
				int run = runtime;
				high_resolution_clock::time_point t1 = high_resolution_clock::now();
				while( runtime > 0)
				{
					fibonacciR(n);
					runtime--;
				}
				high_resolution_clock::time_point t2 = high_resolution_clock::now();
				auto duration = duration_cast<microseconds>( t2 - t1 ).count();
				cout << fixed << endl << "It took the program "
						<< (duration*(.00001)/run)
						<< " seconds to execute (Recursive)";

				runtime = run;
				high_resolution_clock::time_point t3 = high_resolution_clock::now();
				while( runtime > 0)
				{
					fibonacciI(n);
					runtime--;
				}
				high_resolution_clock::time_point t4 = high_resolution_clock::now();
				auto duration2 = duration_cast<microseconds>( t4 - t3 ).count();
				cout << fixed << endl << "It took the program "
						<< (duration2*(.00001)/run) << " seconds to execute "
						<< "(with iterations)\n\n";

			}break;
			/************************************************************************
			 * Case 0 - When the user inputs '0' the program will end.
			 *
			 * Case default - If the user inputs an int less than 0 or greater then
			 *                4 the program will output an error message.
			 ***********************************************************************/
			case 0: exit(1);

			default:
				cout << "\n****The number " << option << " is an invalid entry     "
				"****"<< endl;
				cout << "****Please input a number between 0 and 4 ****";
				cout << endl;
			}// END OF SWITCH STATEMENT
		}// END OF IF STATEMENT
	}// END OF WHILE LOOP
	cout << setprecision(6);
	cout.unsetf(ios::fixed);
	return 0;
}
