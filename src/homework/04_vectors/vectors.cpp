#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const std::vector<int> & num)
{
	int max = *max_element(num.begin(), num.end());

	return max;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
int is_prime(int num)
{
	int i, m = 0, flag = 0;
	bool prime = true;
	m = num / 2;

	for (i = 2; i <= m; i++)
	{
		if (num % i == 0)
		{
			prime = false;
			break;
		}

	}
	return prime;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

vector<int> vector_of_primes(int num)
{;
	vector<int> vecPrimes = {};

	for (int i = 2; i <= num; ++i) 
	{
		if (is_prime(i) == true)
		{
			vecPrimes.push_back(i);		
		}
	}
	
	return vecPrimes;
}