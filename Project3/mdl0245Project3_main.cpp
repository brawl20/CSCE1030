/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			4/12/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Third project of the semester!
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "mdl0245Project3_header.cpp"

using namespace std;

int main(){
AccountType accountType;
Account accountInfo;
Choice menuChoice;
int userChoice;
bool loop;

// make sure money values print as intended.
cout << fixed;
cout << setprecision(2);

// Print the project header
cout << "+---------------------------------------------------------------+\n|		Computer Science and Engineering		|\n|		 CSCE 1030 - Computer Science I 		|\n|   Micheal Landsbaum mdl0245 micheallandsbaum@my.unt.edu	|\n+---------------------------------------------------------------+\n";

do{
	loop = true;
	// Print the menu
	cout << "1. Add Account" << endl;
	cout << "2. Remove Account" << endl;
	cout << "3. Process Accounts" << endl;
	cout << "4. Display Account Information" << endl;
	cout << "5. Quit" << endl;

	//Get users menu choice
	cout << "Enter your choice: ";
	cin >> userChoice;
	//menuChoice = Choice(userChoice);
	menuChoice = static_cast<Choice>(userChoice);
	// Run functions based off userChoice
	switch (menuChoice)
	{
		case Add:
		
		// run addAccount function
		addAccount();
		
		break;
		
		case Remove:
		
		//Ask for account number and call removeAccount function.
		cout << "What is the account number: ";
		cin >> accountInfo.accountNum;
		removeAccount(accountInfo.accountNum);
		
		break;
		
		case Process:
		
		cout << "What is the account number: ";
		cin >> accountInfo.accountNum;
		process_account(accountInfo.accountNum);
		
		break;
		
		case Display:
		
		cout << "What is the account number: ";
		cin >> accountInfo.accountNum;
		displayAccount(accountInfo.accountNum);
		
		break;
		
		case Quit:
		cout << "Goodbye!" << endl;
		loop = false;
		break;
		
		default: 
		cout << "Invalid choice! Please try again" << endl;
		break;
		
	}
}while(loop);

return 0;
}