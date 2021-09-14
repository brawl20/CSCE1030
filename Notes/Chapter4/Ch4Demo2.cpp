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
	//find sum of 10 numbers in a list.
	/*
	Algorithm
	1. Get number from user
	2. Add number
	3. Add one to count number. Am I at 10? No: Go back and get another number. Yes: Stop
	4. Give sum to user
	*/
	
	int userNum;
	int userSum = 0;
	int numCount = 0;
	
	while (numCount < 10)
	{
		cout << "Please type in a number: ";
		cin >> userNum;
		userSum += userNum;
		numCount += 1;
	}
	
	cout << "Your sum is: " << userSum << endl;
	
return 0;
}
