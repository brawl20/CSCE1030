/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/12/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	The second file of lab exam 2

*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Vehicle
	{
		int axels;
		int age;
		double tax;
	};
	
int main()
{
	ifstream fin;
	Vehicle myVehicles[10];
	int userZip;
	double userTax;
	char surcharge;
	int vehicles;
	double totalTax;
	
	fin.open("rate_data.dat");
	if (fin.fail())
	{
		cout << "Unable to open input file " << endl;
		exit(EXIT_FAILURE); //Exit if caannot open file.
	}
	cout << "What is your zip code: ";
	cin >> userZip;
	
	while(!fin.eof())
	{
		int tempZip;
		double tempTax;
		char tempChar;
		
		fin >> tempZip;
		fin >> tempTax;
		fin >> tempChar;
		
		if(userZip == tempZip)
		{
			userTax = tempTax;
			surcharge = tempChar;
			break;
		}
	}
	fin.close();
	
	cout << "How many vehicles do you own: ";
	cin >> vehicles;
	
	for (int i = 0; i < vehicles; i++)
	{
		cout << "How many axels are on vehicle #" << i+1 << "(2/4/6) :";
		cin >> myVehicles[i].axels;
		myVehicles[i].tax = myVehicles[i].axels * userTax;
		if (surcharge = 'Y')
		{
			cout << "How old is the vehicle: ";
			cin >> myVehicles[i].age;
			if(myVehicles[i].age > 10)
			{
				myVehicles[i].tax =+ (myVehicles[i].tax * .10);
				totalTax =+myVehicles[i].tax;
				cout << "Total tax due: " << myVehicles[i].tax << endl;
			}
			else
			{
				cout << "Total tax due: " << myVehicles[i].tax << endl;
				totalTax =+myVehicles[i].tax;
			}
		}
		
	}
	
	
	
	
	return 0;
}