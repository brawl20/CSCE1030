/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			1/27/2020
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is my second of 2 files I will be 
					submitting for lab 03.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Declaring variables.
	string 	name;
	double 	salary;
	int		rate;
	double	bonus;
	// Asking for and setting varibles to an appropiate values.
	
		// Get name and set it as var name.
		cout << "What is your name?" << endl;
		getline(cin,name);
		
		// Get salary amount and save it as variable salary.
		cout << "What is your salary?" << endl;
		cin >> salary;
		
		// Get bonus rate and set it to rate.
		cout << "What is the bonus rate?" << endl;
		cin >> rate;
	
	// Calculate the bonus using the variables given and save var bonus.
		
		bonus = salary * (static_cast<double>(rate)/100);
	
	// Output the result to the second decimal place.
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << name << " earned a bonus of " << bonus << endl;
	
	
	return 0;
}
