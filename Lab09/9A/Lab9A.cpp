/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	First of 3 lab assignments.

*/

#include <iostream>

using namespace std;

void change_me(int &my_int, char &my_char)
{
	my_int = 25;
	my_char='*';
	
}

int main()
{
	int my_int=10;
	char my_char='+';
	
	
	cout << "Before function call: my_int="<<my_int<<"\tmy_char="<<my_char<<endl;
	//call function here
	change_me(my_int, my_char);
	cout << "After function call: my_int=" << my_int << "\tmy_char=" << my_char << endl;

	return 0;
}