/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file;
	file.open("data.dat");
	
	for (int i = 0; i < 5; ++i){
	int int1;
	int int2;
	int int3;
	file >> int1;
	file >> int2;
	file >> int3;
	cout << (int1+int2+int3) << endl;
	}
	
	return 0;
}
