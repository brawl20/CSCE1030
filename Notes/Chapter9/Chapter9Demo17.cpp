/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int *arra;
	
	int size;
	double sum = 0.00;
	
	cout << "Enter size: ";
	cin >> size;
	
	arra = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cin >> arra[i];
		sum += arra[i];
		
	}
	
	cout << "Average = " << (sum/size) << endl;
	
	delete [] arra;

}