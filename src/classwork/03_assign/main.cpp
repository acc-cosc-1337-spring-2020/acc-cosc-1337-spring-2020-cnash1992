//write includes statements
#include "loops.h"

//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;
	
	do 
	{
		int num;
		cout << "Enter a number: ";
		cin >> num;

		cout << "the Factorial is: " << factorial(num)<< "\n";

		cout << "Press 1 to continue ";
		cin >> choice;
	} while (choice == 1);

	return 0;
}