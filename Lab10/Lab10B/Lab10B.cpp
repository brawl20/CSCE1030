/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	second of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 20;

void sort(int i, double arr[])
{
	double temp;
	for(int j = 0; j < i; ++j)
	{
		for(int g = 0; g < i; ++g)
		{
			if(arr[j] < arr[g])
			{
				temp = arr[g];
				arr[g] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int i = 0;
	double d;
	double arr[SIZE];
	ifstream in_arr("unsorted.dat");
	ofstream out_arr("sorted.dat");
	while(in_arr >> d)
	{
		
		arr[i++] = d;
	}
	
	sort(i, arr);
	
	for (int j = 0; j < i; ++j)
	{
		out_arr << arr[j] << "\n";
	}
	in_arr.close();
	out_arr.close();
	return 0;
}