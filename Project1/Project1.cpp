/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/23/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is a project that will replicate the fuction of bank transactions 
					for two different account types.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
// Declare Variables
enum 	Account {Business, Personal,}accountType;
string 	name;
int 	accountNumber;
int		encryptNum;
bool 	goodName;
bool 	goodAccountNumber;
bool	continueTransaction;
bool	tryAgain;
char	userResponse;
float 	businessAccountBalance = 10000.00;
float 	personalAccountBalance = 1000.00;
float 	personalAccountMinimum = 1000.00;
float 	businessAccountMinimum = 10000.00;
float	transactionAmount = 0.00;
bool	goodAccountType;
int		accountInt;

// Print the project header
cout << "+---------------------------------------------------------------+\n|		Computer Science and Engineering		|\n|		 CSCE 1030 - Computer Science I 		|\n|   Micheal Landsbaum mdl0245 micheallandsbaum@my.unt.edu	|\n+---------------------------------------------------------------+\n";

// Ask user for information

// Get name from user and check to see if it is valid.
	do
	{
		cout << "Enter your name:";
		getline(cin,name);
		for (int i=0; i < name.length(); ++i)
		{
			if (isalpha(name.at(i)) || name.at(i) == ' ')
			{
				goodName = true;
			}
			else 
			{
				goodName = false;
				cout << "The name you entered is invalid. Please try again." << endl;
				break;
			}
		}
	} while (goodName == false);
	
	// Convert name initials to uppercase.
	name.at(0) = toupper(name.at(0));
	for (int i=0; i < name.length(); ++i)
		{
			if (name.at(i) == ' ')
			{
				name.at(i+1) = toupper(name.at(i+1));
			}
		}
// Get account number and check to see if it is valid.
	do 
	{
	cout << "Enter your 6-digit account number:";
	cin >> accountNumber;
		if (accountNumber > 999999)
		{
			goodAccountNumber = false;
			cout <<  "The account number you entered is invalid. Please try again." <<  endl;
		}
		else 
		{
			goodAccountNumber = true;
		}
	}while(goodAccountNumber == false);

// Ask which account the user wants to access.
	do
	{
		cout << "What is your account type? 0 for Business, 1 for Personal:";
		cin >> accountInt; 
		accountType = Account(accountInt);
		
		// Select the account type for the respective user input
		switch(accountType)
		{
			case Business:
			do{
				cout << "Please enter the transaction amount. Positive numbers are deposits, negative numbers are withdraws." << endl;
				cin >> transactionAmount;
					if(businessAccountBalance < businessAccountMinimum)
					{
						cout << "Your balance is less than the required minimum. There will be a $10.00 fee for every transaction." << endl;
						businessAccountBalance = (businessAccountBalance + transactionAmount) - 10.00;
					}
					else
					{
						businessAccountBalance = (businessAccountBalance + transactionAmount);
					}
				cout << "Business Balance: $" << businessAccountBalance << endl;
			goodAccountType = true;
			break;
			
			case Personal:
				cout << "Please enter the transaction amount. Positive numbers are deposits, negative are withdraws." << endl;
				cin >> transactionAmount;
				if ((personalAccountBalance + transactionAmount) < personalAccountMinimum)
				{
					cout << "Your personal balance cannot be less than minimum balance. Transaction denied." << endl;
				}
				else
				{
					personalAccountBalance += transactionAmount;
				}
			
			cout << "Personal Balance: $" << personalAccountBalance << endl;
			goodAccountType = true;
			break;
			
			default:
			cout <<  "You entered an invalid number. Please try again." <<  endl;
			goodAccountType = false;
			break;
			}while(goodAccountType == false);
		}
		do {
					cout << "Would you like to make another transaction? Y/N: ";
					cin >> userResponse;
						switch (userResponse)
						{
							case 'y':
						
							case 'Y':
							continueTransaction = true;
							tryAgain = false;
							break;
						
							case 'n':
						
							case 'N':
							continueTransaction = false;
							tryAgain = false;
							break;
						
							default:
							cout << "The answer you provided was invalid. Please try again." << endl;
							tryAgain = true;
						}
					}while (tryAgain == true);
	} while (goodAccountType == false || continueTransaction == true);
// Print the transaction "recipt"
	cout << "Name: " << name << endl;
	srand(time(NULL));
	encryptNum = (rand() % 99999) + 200001;
	accountNumber += encryptNum; 
	if (accountNumber > 999999)
	{
		accountNumber -= 1000000;
	}
	cout << "Account Number (Encrypted): " << accountNumber << endl;
	cout << "Business Balance: $" << businessAccountBalance << endl;
	cout << "Personal Balance: $" << personalAccountBalance << endl;
		

return 0;
}