/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/21/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void getGrades(int students, int **testScores, double *averages)
{
	int tests;
	double sum;
	for(int i = 0; i < students; i++)
	{
		cout << "How many tests did student #"<< i+1 <<" have: ";
		cin >> tests;
		
		testScores[i] = new int[tests];
		sum = 0;
		
		for (int j = 0; j < tests; j++)
		{
			cout << "What was the score for test #" << j+1 << ": ";
			cin >> testScores[i][j];
			
			sum += testScores[i][j];
			
		}
		averages[i] = (sum / tests);
	}
	for(int i = 0; i < students; i++)
	{
		delete [] testScores[i];
	}
}

void dispAverage(double *averages, int students)
{
	for(int i = 0; i < students; i++)
	{
		cout << "Student " << i+1 << "'s average is: " << averages[i] << endl;
	}
}

int main()
{
	int **testScores;
	int students;
	
	double *averages;
	
	cout << "How many students are there: " << endl;
	cin >> students;
	
	*testScores = new int [students];
	averages = new double [students];
	
	getGrades(students, testScores, averages);
	dispAverage(averages, students);
	
	delete [] averages, testScores;
}