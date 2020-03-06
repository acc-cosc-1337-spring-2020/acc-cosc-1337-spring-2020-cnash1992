/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include<iostream>

using std::cout; using std::cin;

class rect
{
public:
	rect(int w, int h) : width{ w }, height{ h } {calculate_area(); }
	int get_area()const { return area; }
	friend std::ostream& operator<<(std::ostream& out, const rect& area);

private:
	int width, height;
	int area;
	void calculate_area();
};