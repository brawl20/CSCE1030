/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Array Demo!
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	const int SIZE = 5;
	int arr[SIZE];
	const int ROWS = 3;
	const int COLS = 4;
	int arr2D[ROWS][COLS];
	int sum[3];
	
	cout << "Please type " << ROWS*COLS << " numbers:" << endl;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << "Enter row #" << i+1 << " Column #" << j+1 << ":";
			cin >> arr2D[i][j];
		
		
		}
	}
	
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			sum[i] += arr2D[i][j];
		}
		
	}
	
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			
		
		
		}
		cout << sum[i] <<  endl;
	}
	
	
	return 0;
}
