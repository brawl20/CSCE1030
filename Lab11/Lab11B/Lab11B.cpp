/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/9/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Second of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	int my_int = 18;
	int *my_iptr1, *my_iptr2;
	my_iptr1 = &my_int;
	
	cout << "my_int: " << my_int << endl;
	cout << "&my_int: " << &my_int << endl;
	cout << "*my_iptr1: " << my_iptr1 << endl;
	cout << "my_int: " << *my_iptr1 << endl;
	
	*my_iptr1 = 15;
	
	cout << "my_int: " << my_int << endl;
	
	my_iptr1 = new int;
	
	*my_iptr1 = 20;
	
	cout << "my_int: " << my_int << endl;
	
	my_iptr2 = new int;
	
	my_iptr2 = my_iptr1;
	
	cout << "*my_iptr1: " << *my_iptr1 << endl;
	
	delete my_iptr2, my_iptr1;
	return 0;
}