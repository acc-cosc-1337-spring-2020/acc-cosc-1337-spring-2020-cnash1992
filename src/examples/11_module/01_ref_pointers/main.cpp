#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int& ref_r = r;
	
	
	cout << "Address of r: " << &r << "\n";
	cout << "value of r: " << r<< "\n";
	cout << "Address of ref_r: " << &ref_r << "\n\n";

	int* ptr_p = &p;
	cout << "Address of p: " << &p << "\n";
	cout << "value of p: " << p << "\n";
	cout << "Address of ptr_p: " << &ptr_p << "\n\n";

	cout << "Contents(address) of ptr_p: " << ptr_p << "\n";
	cout << "Value ptr_p points to: " << *ptr_p;

	*ptr_p = 15;
	cout << "Value ptr p points to: " << *ptr_p << "\n";
	cout << "Value p points to: " << p << "\n";

	

	return 0;
}