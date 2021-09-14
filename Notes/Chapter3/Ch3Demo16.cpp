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
	char ch = 'Q';
	char ch2 =tolower(ch);
	
	cout << ch2 << endl;
	
	cout << static_cast<char>(tolower('T')) << endl;
	
return 0;
}
