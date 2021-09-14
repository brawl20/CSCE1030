/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Third of 3 lab assignments.

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "my_header.h"
using namespace std;


void mycopy(ifstream &in_data, ofstream &out_selected)
{
	string firstName;
	string lastName;
	double GPA;
	int ID;
	
	 while(!(in_data.eof()))
	 {
		in_data >> firstName;
		in_data >> lastName;
		in_data >> GPA;
		in_data >> ID;
		
		if(GPA < 3.0)
		{
		out_selected << setw(10) << left << firstName;
		out_selected << setw(10) << lastName;
		out_selected << setw(5) << GPA;
		out_selected << setw(5) << ID;
		out_selected << endl;
		}
		
	 }
	
}