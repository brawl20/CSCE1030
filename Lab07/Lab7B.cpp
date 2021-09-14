/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Second of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const int ROW_SIZE = 2; //number of rows
	const int COLUMN_SIZE = 5; //Number of columns
	int matrix[ROW_SIZE][COLUMN_SIZE]; //2D Array
	int row_min[ROW_SIZE];
	int column_min[COLUMN_SIZE];
	for(int i=0; i < ROW_SIZE; ++i)
	{
		for(int h=0; h < COLUMN_SIZE; ++h)
		{
			cout<<"Enter data for row#"<<i+1<<" and column#"<<h+1<<":";
			cin>>matrix[i][h]; // read matrix elements
		}
	}
	
	cout<<"You entered:"<<endl;
	for(int i=0; i<ROW_SIZE; ++i)
	{
		for(int h=0; h < COLUMN_SIZE; ++h)
		{
			// print userinputs
			cout<<matrix[i][h]<<"\t";
		}
		cout<<endl;
	}
	for(int i=0; i < ROW_SIZE; ++i)
	{
		row_min[i] = matrix[i][0];
		for(int h=0; h < COLUMN_SIZE; ++h)
		{
			if(matrix[i][h] < row_min[i])
			{
				row_min[i] = matrix[i][h];
			}
		}
	}
	
	for(int h=0; h < COLUMN_SIZE; ++h)
	{
		column_min[h] = matrix[0][h];
		for(int i=0; i < ROW_SIZE; ++i)
		{
			if(matrix[i][h] < column_min[h])
			{
				column_min[h] = matrix[i][h];
			}
		}
	}
	
	for(int i=0; i < COLUMN_SIZE; ++i)
	{
		cout<< "The smallest value in column # " << i + 1 << " is: " << column_min[i] << endl;
	}
	for(int i=0; i < ROW_SIZE; ++i)
	{
		cout<< "The smallest value in row # " << i + 1 << " is: " << row_min[i] << endl;
	}
	return 0;
}