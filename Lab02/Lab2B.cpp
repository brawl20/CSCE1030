#include <iostream>
using namespace std;

int main( )
{
	float radius;
	float height;
	double pi = 3.14159;
	double area;
	
	// Get and save the radius from the user.
	cout << "What is the radius?\n";
	cin >> radius;
	
	// Get and save the height from the user.
	cout << "What is the height?\n";
	cin >> height;
	
	// Calculate the surface area
	area = 2*pi*radius*(radius+height);
	cout << "The surface area is:\n" << area << " square cm" << endl;
	
	
	
}