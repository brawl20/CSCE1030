/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Array Demo!
*/

#include <iostream>

using namespace std;

int main()
{
	int userNum;
	enum Account {Busniess, Personal,};
	 cin >> userNum;
	Account accountType = static_cast<Account>(userNum);
	switch(accountType)
	{
		case Busniess:
		cout << "Hello!\n";
		break;
	}
	
	return 0;
}

