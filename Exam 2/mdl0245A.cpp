/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/12/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	The first file of lab exam 2

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream fout;
	int* random;
	int* ptr;
	
	fout.open("set.dat");
	
	if (fout.fail())
	{
		cout << "Unable to open input file " << endl;
		exit(EXIT_FAILURE); //Exit if cannot open file.
	}
	
	random = new int;
	
	srand(time(NULL));
	
	*random = (rand() % 10) + 10;
	
	ptr = new int[*random];

	for (int i = 0; i < *random; i++)
	{
		ptr[i] = (rand() % 49) + 1;
	}
	
	for (int i = 0; i < *random; i++)
	{
		if ((ptr[i] % 2) == 0)
		{
			fout << ptr[i] << endl;
		}
	}
	
	delete random;
	delete [] ptr;
	fout.close();
	return 0;
}