/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	int x; //static memory, reserved during compilation.
	
	int *ptr; //a pointer
	
	// ptr = &x; // not-dynamic, still static
	
	ptr=new int;
	
	cin >> *ptr; 
	
	cout << *ptr << endl;
	
	int result = (*ptr + 5);
	
	cout << result << endl;
	
	delete ptr;
	
	return 0;
}