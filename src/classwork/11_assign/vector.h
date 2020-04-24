//

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <vector>

/*
Rule of 3 - C++ 98
*/
class Vector 
{
public:
	Vector(size_t sz);
	Vector(const Vector& v); // copy constructor - Rule of 3
	Vector& operator=(const Vector& v); // copy assignment - Rule of 3
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i)const { return nums[i]; }
	~Vector();// destructor - Rule of 3
private:
	size_t size;
	int* nums;
};

#endif // MY_VECTOR_H

//doesn't belong to class
void use_vector(); 
