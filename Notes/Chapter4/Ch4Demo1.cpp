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
	int i = 0;
	int numPrint;
	
	cout << "How many do you want?" << endl;
	cin >> numPrint;
	
	while (i < numPrint)
	{
		cout << "Hello" << endl;
		i += 1;
	}
	
	int value = 10;
	while (value >= -10)
	{
		cout << value << endl;
		value -= 1;
	}
	
return 0;
}
