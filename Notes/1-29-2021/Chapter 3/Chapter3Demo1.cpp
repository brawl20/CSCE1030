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
	int my_int = 87;
	int x;
	
	if (my_int > 15)
	{
		cout << "my_int is greater than 15" << endl;
		x = 20;
	}	
	
	else 
	{
		cout << "my_int is not greater than 15" << endl;
		x = -20;
	}
	
	cout << "x = " << x << endl;
	
	char my_char;
	cout << "Enter a character:";
	cin >> my_char;
	
	
	if (my_char == '*')
	{
		cout << "You entered '*'" << endl;
	}
	
	else 
	{
		cout << "You entered something else." << endl;
	}
	
	int a=6, b=6
	
	if (a > b)
	{
		cout << "A is greater than B" << endl;
	}
	
	else
	{
		cout << "A is not greater than B"
	}
	return 0;
}
