/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	
*/

#include <iostream>
using namespace std;

int main()
{
	/*
	int x = 10;
	bool my_bool;  //Boolean Variable
	
	my_bool = true; //or, my_bool=false
	*/
	
	/*
	int grade;
	
	cout << "What is the grade?" << endl;
	
	if (grade >= 90) 
	{
		cout << "Your grade is an A!" << endl;
	}
	
	else if (grade >= 80 || grade < 90)
	{
		cout << "Your grade is a B!" << endl;
	}
	
	else if (grade >= 70 || grade < 80)
	{
		cout << "Your grade is a C!" << endl;
	}
	
	else if (grade >= 60 || grade < 70)
	{
		cout << "Your grade is a D!" << endl;
	}
	
	else 
	{
		cout << "You got an F!" << endl;
	}
	*/
	char letter_grade;
	
	
	cout << "Enter your letter grade" << endl;
	cin >> letter_grade;
	
	
	switch(letter_grade)
	{
		
		case 'A':
			cout << "You got an A!" << endl;
			break;
		case 'B':
			cout << "Your got a B!" << endl;
			break;
		case 'C':
			cout << "You got a C!" << endl;
			break;
		case 'D':
			cout << "You got a D!" << endl;
			break;
		case 'F':
			cout << "You got an F!" << endl;
			break;
		default
			cout << "Invalid!" << endl;
			break;
	}
	
	
	
	
	return 0;
}
