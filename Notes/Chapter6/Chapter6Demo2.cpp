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

const int MAX_ROWS = 10;
const int MAX_COLS = 10;


void getArray(int arr2D[][MAX_COLS],int& r, int& c)
{
	cout << "How many rows?";
	cin >> r;
	cout << "How many columns?";
	cin >> c;
	
	cout << "Enter " <<r*c<< " intigers:";
	for (int i = 0; i <r; ++i)
	{
		for(int j = 0; j < c; ++j)
		{
			cin >> arr2D[i][j];
		}
	}
}

void showArray(int arr2D[][MAX_COLS],int& r, int& c)
{
	cout << "The array is:" << endl;
	for(int i=0; i < r; ++i){
		for(int j=0; j < c; ++j)
		{
			cout << arr2D[i][j] << "\t";
		}
	}
}

int main()
{
	


	int arr2D[MAX_ROWS][MAX_COLS];
	
	int r,c;
	
	getArray(arr2D,r,c);
	showArray(arr2D,r,c);
	cout << endl;
	
	
	
	return 0;
}