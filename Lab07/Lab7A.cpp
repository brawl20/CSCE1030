/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const int SIZE = 12; 	// 12 students
	int sum_height = 0; 	// variable for sum of heights
	int height[SIZE]; 		// array to store height of 12 students
	int above_average[SIZE];// store all above average heights in this array
	double average;			// variable for average of heights
	int above = 0;
	for(int i=0; i<SIZE; ++i)
	{
		cout << "Enter height in inches of student #" << i + 1 << ": ";
		cin >> height[i];
		//Compute sum of heights
		sum_height += height[i];
	}
	// compute average of hights
	average = statsum_height / SIZE;
	// in a loop check if height is above average
	for(int i=0; i<SIZE; ++i)
	{
		// copy to above_average array if it is
		if(height[i] > average)
		{
			
			above_average[above] = height[i];
			++above;
			
		}
	}
	
	
	cout << "You entered:" << endl;
	for(int i=0; i < SIZE; ++i)
	{
		//Display all heights entered by user
		cout << height[i] << endl; 
	}
	cout << "****************************************************" << endl;
	
	
	cout << "Above average:" << endl;
	// Display all heights above above average in a loop
	for(int i=0; i<above; ++i)
	{
		cout << above_average[i] << endl;
	}
	cout << endl;
	return 0;
}