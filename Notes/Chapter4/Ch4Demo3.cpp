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
	
	int userNum;
	int userSum = 0;
	int numCount = 0;
	int userInputs;
	
	cout << "How many numbers do you have? ";
	cin >> userInputs;
	
	
	while (numCount < userInputs)
	{
		cout << "Please type in a number: ";
		cin >> userNum;
		userSum += userNum;
		numCount += 1;
	}
	
	cout << "Your sum is: " << userSum << endl;
	
return 0;
}
