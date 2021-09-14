/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Second of 3 lab assignments.

*/

#include <iostream>
#include "Lab9_Header.h"
using namespace std;
const int COLS = 6; //6 quiz grades
const int ROWS = 10; // 10 students
int main()
{
	float grades[ROWS][COLS]; // 2D array for grades
	float maximum[ROWS]; //array to store maximum grade for each student
	int num; // number of students in the class, must not be more than 10
	bool repeat;
	do
	{
		cout << "How many students in the class?";
		cin >> num; //get number of students
		if (num > 10)
		{
			repeat = true;
			cout << "Number exceeds allowed number of 10. Please try again." << endl;
		}
		else
		{
			repeat = false;
		}
	}while(repeat == true);
	
	for (int row = 0; row < num; row++)
	{
		// enters 6 quiz grades for each student
		
		for(int col = 0; col < COLS; col++)
		{
			cout << "Enter QUIZ #" << col+1 << " for STUDENT #" << row+1 << ": ";
			cin >> grades[row][col];
		}
		computeMaximum(grades, num, maximum);
	}
		for (int row = 0; row < num; row++)
		{
			for (int col = 0; col < COLS; col++)
			{
				cout << grades[row][col] << " ";
			}
			cout << endl;
		}
	cout << "The maximum grades:\n";
	//call function showArray
	showArray(maximum, COLS);
	cout << endl;
	return 0;
}
