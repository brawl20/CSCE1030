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
	
	//dest = source; // Doesnt work
	
	//int temp =source[0];
	//source[0]=source[4]
	//source[4]=temp;
	for (int i=0; i<SIZE; ++i)
	{
		int temp = source[i];
		source[i] = source[SIZE-i-1];
		source[SIZE-i-1] = temp;
		cout << source[i] << source[SIZE-i-1];
		
	}
	
	
	int x=10, y=15;
	
	cout << "Before swap:x=" << x << "y=" << y << endl;
	
	int temp = x;
	x = y;
	y = temp;
	cout << "After swap:x=" << x << "y=" << y << endl;
	
	
	
	return 0;
}
