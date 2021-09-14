/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Array Demo!
*/

#include <iostream>

using namespace std;

int main()
{
	const int SIZE=5;
	int source[SIZE] = {-6, 9, 11, 2, 3};
	int dest[5];
	
	//dest = source; // Doesnt work
	
	for (int i=(SIZE-1); i>=0; --i)
	{
		dest[i] = source[i];
		cout << dest[i] << endl;
	}
	
	
	
	int x = 10;
	int y=x;
	
	
	
	return 0;
}
