/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Fucntion file for second lab.

*/

#include <iostream>

using namespace std;
const int COLS = 6;
void computeMaximum(float grades[][COLS], int num, float maximum[])
{

	for (int i = 0; i < COLS; i++)
	{
		maximum[i] = grades[0][i];
		for (int j = 0; j < num; j++)
		{
			if (grades[j][i] > maximum[i])
			{
				maximum[i] = grades[j][i];
			}
		} 
	}
}