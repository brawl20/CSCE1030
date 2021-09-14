/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/19/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;


int main()
{
	char str1[29];
	char str2[29];
	int stringLength1;
	int stringLength2;
	
	strcpy(str1, "This is C-String programming\0");
	
	cout << "Enter a string of text:" << endl;
	
	cin.getline(str2,30);
	
	stringLength1 = strlen(str1);
	stringLength2 = strlen(str2);
	
	if(stringLength1 == stringLength2)
	{
		cout << "The strings are the same length." << endl;
	}
	else
	{
		cout << "The strings are not the same length." << endl;
	}


	return 0;
}