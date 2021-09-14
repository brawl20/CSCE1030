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

const int SIZE = 10;
int main()
{
	// int array[SIZE];
	
	int* array; // creat a pointer
	int num;
	int sum = 0;
	cout << "How many integers?:";
	cin >> num;
	
	//int array[num]; // can't do this.
	array = new int[num];
	
	for (int i = 0; i < num; ++i)
	{
		cin >> array[i];
	}
	
	for (int i = 0; i < num; ++i)
	{
		sum+=array[i];
		
	}
	
	cout << "The average is: " << (static_cast<double>(sum)/num) << endl;
	
	delete [] array;
}