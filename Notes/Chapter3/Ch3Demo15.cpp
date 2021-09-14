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
	string str = "This is CSCE 1030 !!!";
	
	int length = str.length();
	str.size();
	
	cout<<"Length:"<<length<<endl;
	
	
	string search_str="CSCE";
	int location = str.find(search_str);
	cout << "Location:" << location << endl;
	
	//concatination
	string str1 = "Hello ";
	string str2 = "my friend";
	
	str1.append(str2);
	cout << str1 << endl;
	
	
	string extracted = str.substr(10, 4);
	cout << "Extracted:" << extracted << endl;
	cout << str.substr(1, 5) << endl;
return 0;
}
