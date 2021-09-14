/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/12/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 2 lab assignments.

*/

#include <iostream>
using namespace std;

int main()
{
	char userInput;
	
	cout << "Type 'U' for summer, 'F' for fall, 'W' for winter, or 'S' for spring." << endl;
	
	cin >> userInput;
	userInput = toupper(userInput);
	switch (userInput)
	{
		
		
		case 'U':
			cout << "It's very hot outside." << endl;
			break;
		// If the user inputs F.
		case 'F':
			cout << "It's great weather outside." << endl;
			break;
		// User inputs W.
		case 'W':
			cout << "It's fairly cold outside." << endl;
			break;
		//User inputsS
		case 'S' :
			cout << "It's rather warm outside." << endl;
			break;
		
		default :
			cout << "Wrong choice." << endl;
	}
	
	
	return 0;
}
