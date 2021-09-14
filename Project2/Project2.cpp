/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/27/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is a project that will replicate the fuction of bank transactions 
					for two different account types.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const float business_min 	= 10000.00;
const float personal_min 	= 1000.00;
const int 	account_num 	= 6;
const int 	transaction_max = 20;
enum		Account {Business, Personal,}accountType;
enum		Menu	{Process, Display, Quit,}menuChoice;

/*
Function:			Get name
Parameters:			A string to save the name.
Return: 			Nothing (it is void) 
Description: 		Get the name of the user and check to make sure it is valid.
					If it isnt it repeats until it is valid and saves it.
*/

void getName(string &name)
{
	bool goodName;
	do{
		// Get the input string
		cout << "Enter your name:";
		getline(cin, name);
		// Check the validity of the string entered.
		int string_length = name.length();
		// Look through each element in the string and make sure it is a char or space.
		for (int i = 0; i < string_length; ++i)
		{
			// Check if it is a alpha value or space.
			if(isalpha(name.at(i)) || (name.at(i) == ' '))
			{
				goodName = true;
			}
			// If it isnt a alpha value or space tell user to enter new string and break loop.
			else
			{
				cout << "Your name can only have alphabets or spaces. Enter again." << endl;
				goodName = false;
				break;
			}	
		}
	}while(!(goodName));
	
	// Make the initials uppercase.
	name.at(0) = toupper(name.at(0));
	
	for (int i = 1; i < name.length(); ++i)
	{
		if (name.at(i-1) == ' ')
		{
			name.at(i) = toupper(name.at(i));
		}
	}
	
}

/*
Function:			Get account number
Parameters:			A string to save the account number.
Return: 			Nothing (it is void) 
Description: 		Get the account number from the user
					and check to make sure it doesn't have
					any non-numaric values as well as only
					being 6 digits.
*/

void getAccountNumber(string &accountNumber)
{
	bool validAccountNumber;
	bool alphaError;
	// Get account number from user
	cout << "Enter your account number:";
	cin >> accountNumber;
	do{
		for (int i = 0; i < accountNumber.length(); ++i)
			{
				if(isalpha(accountNumber.at(i)))
				{
					alphaError = true;
					break;
				}
				else
				{
					alphaError = false;
				}
			}
			if(alphaError)
			{
				validAccountNumber = false;
				cout << "Account number can only contain numbers. Enter again:";
				cin >> accountNumber;
			}
			else if(!(alphaError) && (accountNumber.length() != 6))
			{
				validAccountNumber = false;
				cout << "Your account number is a 6-digit number. Enter again:";
				cin >> accountNumber;
			}
			else
			{
				validAccountNumber = true;
			}
	}while(!(validAccountNumber));
}

/*
Function:			Encrypt account number.
Parameters:			A string that passes in the un-encrypted AccountNumber.
Return: 			a string holding the encryptedAccountNum.
Description: 		Bring in the old account number, and change each element
					using a seeded random value.
*/

string encrypt_num(string accountNumber)
{
	int accountNumberArray[account_num];
	srand(time(NULL));
	for (int i = 0; i < account_num; ++i)
	{
		accountNumberArray[i] = (rand() % 10) + 10;
	}
	for (int i = 0; i < account_num; ++i)
	{
		accountNumber.at(i) = accountNumber.at(i) + accountNumberArray[i];
	}
	
	return accountNumber;
}

/*
Function:			Display the transactions.
Parameters:			A 2D double array.
					an int for how many transactions need to be displayed.
					account type enum
					and a bool for sort.
Return: 			None (Void)
Description: 		A display function for specific account types transactions and an option to sort them.
*/

void display_transactions(double transactions[][2], int transactionDisplay, enum Account, bool sort)
{
	switch (accountType)
	{
		case Business:
		if (!sort){
			for (int i = 0; i < transactionDisplay; ++i)
			{
				cout << "$" << transactions[i][0] << endl;
			}
		}
		else
		{
			for(int i = 0; i < (transactionDisplay - 1); ++i)
			{
				if(transactions[i][0] < transactions[i + 1][0])
				{
					int temp = transactions[i + 1][1];
					transactions[i + 1][0] = transactions[i][0];
					transactions[i][0] = temp;
				}
			}
			for (int i = 0; i < transactionDisplay; ++i)
			{
				cout << "$" << transactions[i][0] << endl;
			}
		}
		break;
		case Personal:
		if (!(sort)){
			for (int i = 0; i < transactionDisplay; ++i)
			{
				cout << "$" << transactions[i][1] << endl;
			}
		}
		else
		{
			for(int i = 0; i < (transactionDisplay - 1); ++i)
			{
				if(transactions[i][1] < transactions[i + 1][1])
				{
					int temp = transactions[i + 1][1];
					transactions[i + 1][1] = transactions[i][1];
					transactions[i][1] = temp;
				}
			}
			for (int i = 0; i < transactionDisplay; ++i)
			{
				cout << "$" << transactions[i][1] << endl;
			}	
		}
		break;
	}
}	

/*
Function:			Display the transactions.
Parameters:			A 2D double array.
					an int for how many transactions need to be displayed.
					account type enum
					and a bool for sort.
Return: 			None (Void)
Description: 		A display function for specific account types transactions and an option to sort them.
*/

void displayAccount(double transactions[][2], int businessTransactions, int personalTransactions)
{
	bool loop = false;
	bool userSort;
	do{
		int userInput;
		bool invalidChar;
		char sortChar;
		cout << "What account would you like to display? 0 for Business, 1 for Personal:";
		cin >> userInput;
		cout << "Do you want to sort? Y/N:";
		do{
			cin >> sortChar;
			invalidChar = false;
			switch(sortChar)
			{
				
				case 'y':
				
				case 'Y':
				userSort = true;
				break;
				
				case 'n':
				
				case 'N':
				userSort = false;
				break;
				
				default:
				cout << "Enter a vaild answer:";
				invalidChar = true;
				
			}
		}while(invalidChar);
		
		accountType = Account(userInput);
		
		switch(accountType)
		{
			case Business:
				display_transactions(transactions, businessTransactions, accountType, userSort);
			break;
			
			case Personal:
				display_transactions(transactions, personalTransactions, accountType, userSort);
			break;
			
			default:
			cout << "You enterened  an invalid response for account type. Please try again" << endl;
			loop = true;
			break;
		}
	}while(loop);
}

/*
Function:			Display the transactions.
Parameters:			A 2D double array.
					An int for businessTransactions.
					An int for personalTransactions.
					A double for personal balance.
					A double for business balance.
Return: 			None (Void)
Description: 		A display function for specific account types.
*/

void process_account(double transactions[][2], int &businessTransactions, int &personalTransactions, double &businessBal, double &personalBal)
{
	int userInput;
	char runAgain;
	bool validChoice;
	bool tryAgain = false;
	bool anotherTransaction = false;
	do {
		cout << "What is your account type?0 for Business, 1 for Personal:";
		cin >> userInput;
		do {
			do{
			double transactionAmount;
			accountType = Account(userInput);
			
				switch (accountType)
				{
					case Business:
					validChoice = true;
					cout << "Enter transaction:";
					cin >> transactionAmount;
					if (businessBal < business_min)
					{
						cout << "Your current balance is less than the required minimum. There will be a $10.00 fee for every transaction." << endl;
						businessBal += (transactionAmount - 10);
						transactions[businessTransactions][0] = transactionAmount;
						businessTransactions += 1;
						cout << "Business Balance:$" << businessBal << endl;
					}
					else
					{
						businessBal += transactionAmount;
						cout << "Business Balance:$" << businessBal << endl;
						transactions[businessTransactions][0] = transactionAmount;
						businessTransactions += 1;
					}
					break;
				
					case Personal:
					validChoice = true;
					cout << "Enter transaction:";
					cin >> transactionAmount;
					if((personalBal + transactionAmount) < personal_min)
					{
						cout << "Transaction denied. Requested transaction would put you below the minimum balance required." << endl;
					}
					else
					{
						personalBal += transactionAmount;
						transactions[personalTransactions][1] = transactionAmount;
						personalTransactions += 1;
						cout << "Personal Balance:$" << personalBal << endl;
					}
			
					break;
				
					default:
					validChoice = false;
					cout << "Wrong choice. Please try again:";
					cin >> userInput;
					break;
				}
			}while(!(validChoice));
			do{
				cout << "Do you want to process another transaction? Y/N:";
				cin >> runAgain;
				switch(runAgain)
				{
					case 'y':
					
					case 'Y':
					anotherTransaction = true;
					break;
					
					case 'n':
					
					case 'N':
					anotherTransaction = false;
					break;
					
					default:
					cout << "Try again";
					tryAgain = true;
					break;
				}
			}while(tryAgain);
		}while(!(validChoice));
	}while(anotherTransaction);
}

int main()
{

// Variable declarations
string accountNumber;
string encryptedAccountNum;
string name;
double 	transactions[transaction_max][2];
double 	personalBal = 1000.00;
double 	businessBal = 10000.00;
int		businessTransactions = 0;
int		personalTransactions = 0;
int		userInt;
bool	menu;
bool	menuFail;

// Code project header
cout << "+---------------------------------------------------------------+\n|		Computer Science and Engineering		|\n|		 CSCE 1030 - Computer Science I 		|\n|   Micheal Landsbaum mdl0245 micheallandsbaum@my.unt.edu	|\n+---------------------------------------------------------------+\n";
cout << fixed;
cout << setprecision(2);
// calling funtions
getName(name);
getAccountNumber(accountNumber);
do{
	cout << "1. Process Accounts" << endl;
	cout << "2. Display Account Information" << endl;
	cout << "3. Quit" << endl;
	do{
	menuFail = false;
	cout << "Enter your choice:";
	cin >> userInt;
	menuChoice = Menu(userInt - 1);
		switch (menuChoice)
		{
			case Process:
			menu = true;
			process_account(transactions, businessTransactions, personalTransactions, businessBal, personalBal);
			break;
			
			case Display:
			menu = true;
			cout << "Name:" << name << endl;
			encryptedAccountNum = encrypt_num(accountNumber);
			cout << "Account Number (Encrypted):" << encryptedAccountNum << endl;
			displayAccount(transactions, businessTransactions, personalTransactions);
			cout << endl;
			break;
			
			case Quit:
			menu = false;
			break;
			
			default:
			cout << "Please enter a valid input:";
			menuFail = true;
			break;
		}
	}while(menuFail);
}while(menu);
return 0;
}