//write include statements
#include "dna.h"
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	string cont;
	string user_dna;
	cout << "Enter 1 for GC Content or enter 2 for dna complement: ";
	cin >> choice;

	if (choice == 1) 
	{
		cout << "Enter a DNA strand here: ";
		cin >> user_dna;
		double gc_content = get_gc_content(user_dna);

		cout << "The GC content is: " << gc_content;
		
		do
		{
			std::cout << "Continue? Enter y to continue: ";
			std::cin >> cont;

		} while (cont == "y");
	}

	if (choice == 2)
	{
		cout << "Enter a DNA strand here: ";
		cin >> user_dna;
		string dna_complement = get_dna_complement(user_dna);

		cout << "The DNA complement is: " << dna_complement;

		do
		{
			std::cout << "Continue? Enter y to continue: ";
			std::cin >> cont;

		} while (cont == "y");
	}

	else 
	{
		cout << "The program has ended";
	}


	return 0;
}