/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is the exam!!!!

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string userString;
	bool found;
	
	
	cout << "Please enter a string:";
	getline(cin,userString);
	
	for (int i=0; i < userString.length(); ++i){
		
		if(isdigit(userString.at(i))){
			if(isalpha(userString.at(i-1)) && isalpha(userString.at(i+1))){
				found = true;
				break;
			}
			else{
				found = false;
			}
		}	
	}
	if (found == true){
		cout << "There is a digit between to letters of alphabets in this string." << endl;
	}
	else{
		cout << "There are no such digits." << endl;
	}
	return 0;
}