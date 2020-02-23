#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


double get_gc_content(const string & dna)
{
	
	double gc_content = 0.0;
	
	double count = 0;
	 

	for (int i = 0; i < dna.length(); ++i)
	{

		if (dna[i] == 'C' || dna[i] == 'G')
		{
			count++;
		}
		
		


	}

	gc_content = count / dna.length();
	
	return gc_content;
}







/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna2)
{
	string reversed_dna;

	for (int i=dna2.length(); i > 0; --i)
	{
		
		reversed_dna.push_back(dna2[i-1]);
		
	}
	
	return reversed_dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
	
	string reversed = get_reverse_string(dna);

	for (auto i = 0; i < reversed.length(); ++i) 
	{
		if (reversed[i] == 'A') 
		{
			reversed[i] = 'T';
			
		}

		else if (reversed[i] == 'T')
		{
			reversed[i] = 'A';
			
		}

		else if (reversed[i] == 'G')
		{
			reversed[i] = 'C';
			
		}

		else if (reversed[i] == 'C')
		{
			reversed[i] = 'G';
			
		}


	}
	
	return reversed;
}

