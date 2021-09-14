/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void first(double my_dbl);
double second(double my_dbl);


int main()
{
	
	
	double my_dbl=75.00;
	first(my_dbl);
	
	
	
	return 0;
}

double second(double my_dbl)
{
	my_dbl+=10;
	return my_dbl;
}

void first(double my_dbl)
{
	my_dbl = second(my_dbl);
	double my_root=sqrt(my_dbl);
	cout << "Root: "<< my_root<< endl;
	
}