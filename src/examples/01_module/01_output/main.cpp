#include "output.h" //use file code that i created
#include <iostream> //use standard library

using std::cout;

int main() 
{
	int n1 = 5, n2 = 10;
	if (6 >= n1 &&  6 <= n2)
	{
		//6 is in range
	}

	if (6 >= n1 || 6 <= n2)
	{
		//6 outside range
	}

	if (!(6 >= n1 && 6 <= n2))
	{
		//6 not in range
	}

	if (6 != n1)
	{
		//6 is not in range
	}

	cout<<"Hello World!";

	return 0;
}