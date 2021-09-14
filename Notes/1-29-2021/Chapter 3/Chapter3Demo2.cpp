/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	

	Algorithm: 
	1. Get the number from the user
	2. Divide the number by 2 and check the remainder
	3. Is the remainder 0?
		Yes: Even Number
		No: Odd Number
	4. Tell the user the result
*/

#include <iostream>
using namespace std;

int main()
{
	
	int input_num;
	int remainder;
	cout << "What number do you want to check?:" << endl;
	cin >> input_num;
	
	remainder = input_num % 2;
	
	if (remainder == 0)
	{
		cout << "Number is even." << endl;
	}
	else
	{
		cout << "Number is not even." << endl;
	}
	
	
	return 0;
}
