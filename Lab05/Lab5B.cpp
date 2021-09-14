/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/12/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	2 of 2 lab assignments.

*/

#include <iostream>
using namespace std;
int main()
{
	string compSciString = "This is a lab in CSCE 1030 based on strings." ;
	string searchString;
	
	cout << "What do you want to look for?" << endl;
	cin >> searchString;
	if (compSciString.find(searchString, 0) != string::npos){
		
		cout << compSciString.find(searchString) << endl;
	}
	else {
		cout << "This is not in the string" << endl;
	}
	
	

	
	return 0;
}
