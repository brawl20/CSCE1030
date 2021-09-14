/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Third of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "my_header.h"

using namespace std;


int main()
{
	ifstream in_data;
	ofstream out_selected;
	
	in_data.open("data.dat");
	out_selected.open("selected.dat");
	
	mycopy(in_data, out_selected);
	
	in_data.close();
	out_selected.close();
	return 0;
}