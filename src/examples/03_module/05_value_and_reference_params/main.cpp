#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	cout << "value of: " << num << " Address is: " << &num;

	int &num_ref = num;
	num_ref = 10;
	cout << "\n value of: " << num << " Address is: " << &num;

	return 0;
}