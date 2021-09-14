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

void getArray(int array[], int num)
{
	for (int i = 0; i < num; ++i)
	{
		cin >> array[i];
	}
}

double getAverage(int array[], int num)
{
	int sum = 0;
	for (int i = 0; i < num; ++i)
	{
		sum+=array[i];
		
	}
	return ((static_cast<double>(sum)/num));
}

const int SIZE = 10;
int main()
{
	int* array;
	int num;
	cout << "How many integers?:";
	cin >> num;
	
	array = new int[num];
	
	getArray(array, num);
	
	
	cout << "The average is: " << getAverage(array, num) << endl;
	
	delete [] array;
}