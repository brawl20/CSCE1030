/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			1/27/2020
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is my first of 2 files I will be 
					submitting for lab 03.

*/

#include <iostream>
using namespace std;

int main()
{
	// Declaring variables
	int 	var1;
	char 	var2;
	float 	var3;
	float 	var4;
	
	// Setting varibles to an appropiate value
	var1 = 25;
	var2 = 'L';
	var3 = 2.5;
	
	// Computer result and store value as var4
	var4 = var3 + var2 % var1;
	
	// Output the result
	cout << "The result is:" << var4 << endl;
	
	
	return 0;
}
