/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main()
{
	char c;
	ifstream in_s; //Declaration of the stream of type input.
	
	char input_file[15];
	char output_file[15];
	cout << "Enter the name of the input file: ";
	cin >> input_file;
	cout << "Enter the name of the output file: ";
	cin >> output_file;
	
	in_s.open(input_file); //Connect to th input file and test
	if (in_s.fail())
	{
		cout << "Unable to open input file " << input_file << endl;
		exit(EXIT_FAILURE); //Ecit if cannot open file.
	}
	ofstream out_s(output_file); //Decaration of the stream of type output.
	
	while (!(in_s.eof())) //read all characters one-by-one to end of the file
	{
		in_s.get(c);
		out_s.put(c);
	}
	
	in_s.close(); // Close the file
	out_s.close();
	return 0;
}