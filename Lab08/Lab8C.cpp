/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/19/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Third of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip> 

using namespace std;

//Function defenition
/*
Function:	Calculate ASCII sum
Parameters: A string representing the first string
			A string representing the second string
Return:		A bool representing if str1 is larger or not.
Description:This function calculates a ASCII sum for 2 strings and compares them. Making a bool true if str1 ASCII sum is larger.
*/

bool isLarger(string str1, string str2)
{
	bool larger;
	int str1_sum;
	int str2_sum;
	
	//Compute and compare ASCII sum
	for (int i = 0; i < str1.length(); ++i)
	{
		str1_sum += str1.at(i);
	}
	for (int i = 0; i < str2.length(); ++i)
	{
		str2_sum += str2.at(i);
	}
	
	//Set larger to true if ASCII of str1 is larger
	if (str1_sum > str2_sum)
	{
		larger = true;
	}
	else
	{
		larger = false;
	}
	
	
	//Else set larger to false
	
	return larger;
}

int main()
{
	string str1, str2;
	bool larger;
	//Get values for str1 and str2 from the user
	cout << "Type a sentence for str1:";
	getline(cin, str1);
	cout << "Type a sentence for str2:";
	getline(cin, str2);
	
	
	larger = isLarger(str1, str2);
	
	if(larger)
	{
		cout << "str1 has the larger ASCII sum" << endl;
	}
	else
	{
		cout << "str1 does not have the larger ASCII sum" << endl;
	}
	
	return 0;
}

