#include "vectors.h"

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> vecInt = { 8, 4, 20, 88, 66, 99 };
	string cont;
	int choice;
	vector<int> userVec;
	
	
	do
	{
		cout << "Enter 1 for Get Max from vector or 2 for Get Primes. ";
		cin >> choice;
		if (choice == 1) 
		{
			cout << "\n";
			for (int i = 0; i < vecInt.size(); ++i) 
			{
				cout << vecInt[i] << " ";
			}
			cout << "The Max value of the list is: " << get_max_from_vector(vecInt) << "\n";
			
		}

		else if (choice == 2) 
		{
			int user_num;
			cout << "Enter a number: ";
			cin >> user_num;
			vector<int> userVec = vector_of_primes(user_num);

			cout << "List of Primes: ";
			for (int i = 0; i < userVec.size(); ++i)
			{
				cout << userVec[i] << ", ";
			}
			
		}

		else
		{
			break;
		}

		cout << "Would you like to continue? press y or Y to continue: ";
		cin >> cont;
		

	} while (cont == "y");

	return 0;
}