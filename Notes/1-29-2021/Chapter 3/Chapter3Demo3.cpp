/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	
*/

#include <iostream>
using namespace std;

int main()
{
	
	int grade , threshold = 60;
		
	cout << "What is your grade?" << endl;	
	cin >> grade; 
	
	if (grade < 0 || grade > 100)
	{
		cout << "Invalid grade" << endl;
	}

	else if (grade >= threshold)
	{
		cout << "Passing" << endl;
	}
	
	else
	{
		cout << "Failing" << endl;
	}
	
	return 0;
}
