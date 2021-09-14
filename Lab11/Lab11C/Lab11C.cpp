/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/9/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Third of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int getArrayMax(int arra[], int arraySize)
{
	int max = 0;
	
	for(int i = 0; i < arraySize; ++i)
	{
		if(*(arra+i) > max)
		{
			max = *(arra+i);
		}
	}
	
	
	return max;
}

int main()
{
	int arraSize;
	int *arra;
	
	cout << "How many integers are there?";
	cin >> arraSize;
	
	arra = new int[arraSize];

	for (int i = 0; i < arraSize; ++i)
	{
		cout << "Integer " << i + 1 << ": ";
		cin >> *(arra+i);
	}
	
	cout << getArrayMax(arra, arraSize) << endl;
	
	delete arra;
	return 0;
}