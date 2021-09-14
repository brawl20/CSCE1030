/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/8/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	string temp;
	double salarySum = 0;
	double averageSalary = 0;
	int employeeNum = 0;
	
	ifstream fin;
	ofstream fout;
	
	fin.open("data.dat");
	
	struct EmployeeData
	{
		string name;
		double salary;
	} employee;

	while(!(fin.eof()))
	{
		getline(fin, employee.name, ',');
		++employeeNum;
		fin >> employee.salary;
		salarySum += employee.salary;
	}
	
	averageSalary = salarySum / employeeNum;
	
	cout << "The average salary is: " << averageSalary << endl;
	fin.close();
	fout.close();
	return 0;
}