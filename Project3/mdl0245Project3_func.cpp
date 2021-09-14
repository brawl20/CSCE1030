#include "mdl0245Project3_header.cpp"
using namespace std;

AccountType accountType;
Account accountInfo;
Choice menuChoice;
/*
Function:			Get name
Parameters:			A string to save the name.
Return: 			Nothing (it is void) 
Description: 		Get the name of the user and check to make sure it is valid.
					If it isnt it repeats until it is valid and saves it.
*/
void getName()
{
	bool goodName;
	do{
		// Get the input string
		cout << "What is the name on the account: ";
		cin.ignore();
		getline(cin, accountInfo.name);
		// Check the validity of the string entered.
		int string_length = accountInfo.name.length();
		// Look through each element in the string and make sure it is a char or space.
	//	if (accountNum.name == "")
	//	{
	//		goodName = false;
	//	}
		for (int i = 0; i < string_length; ++i)
		{
			// Check if it is a alpha value or space.
			if(isalpha(accountInfo.name.at(i)) || (accountInfo.name.at(i) == ' '))
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
	accountInfo.name.at(0) = toupper(accountInfo.name.at(0));
	
	for (int i = 1; i < accountInfo.name.length(); ++i)
	{
		if (accountInfo.name.at(i-1) == ' ')
		{
			accountInfo.name.at(i) = toupper(accountInfo.name.at(i));
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
void getAccountNumber()
{
	bool validAccountNumber;
	bool alphaError;
	// Get account number from user
	cout << "What is the account number: ";
	cin >> accountInfo.accountNum;
	do{
		for (int i = 0; i < accountInfo.accountNum.length(); ++i)
			{
				if(isalpha(accountInfo.accountNum.at(i)))
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
				cin >> accountInfo.accountNum;
			}
			else if(!(alphaError) && (accountInfo.accountNum.length() != accountNumberLength))
			{
				validAccountNumber = false;
				cout << "Your account number is a 6-digit number. Enter again:";
				cin >> accountInfo.accountNum;
			}
			else
			{
				validAccountNumber = true;
			}
	}while(!(validAccountNumber));
	
}

/*
Function:			Get the number of transactions in a file.
Parameters:			A string to pass the file name.
Return: 			An int representing the number of transactions. 
Description: 		Open the file via the name that is passed in
					and count the number of transactions inside of it
					and return it.
*/
int getNumberofTransactions(string fileName)
{
	string tempHolder;
	int i = 0;
	ifstream fin;
	fin.open(fileName);
	if (fin.fail())
	{
		cout << "Unable to open file " << fileName << endl;
		exit(EXIT_FAILURE);
	}
	
	while (!fin.eof())
	{
		getline(fin, tempHolder);
		++i;
	}
	fin.close();
	return i;
}

/*
Function:			Get the number of accounts in a file.
Parameters:			A string to pass the file name.
Return: 			An int representing the number of accounts. 
Description: 		Open the file via the name that is passed in
					and count the number of accounts inside of it
					and return it.
*/
int getNumberofAccounts(string fileName)
{
	int i;
	string tempHolder;
	ifstream fin;
	fin.open(fileName);
	if (fin.fail())
	{
		cout << "Unable to open file " << fileName << endl;
		exit(EXIT_FAILURE);
	}
	
	while(!fin.eof())
	{
		getline(fin, tempHolder);
		i++;
	}
	fin.close();
	return i;
}

/*
Function:			Add the account info gathered from the user
					and add it to account_data.
Parameters:			None
Return: 			Void. 
Description: 		Open the file via the string
					and add both name and account 
					number to file opened.
*/
void addAccount()
{
	
	ofstream fout;
	fout.open("account_data", ofstream::app);
	if (fout.fail())
	{
		cout << "Unable to open input file " << endl;
		exit(EXIT_FAILURE); //Exit if caannot open file.
	}
	getName();
	getAccountNumber();
	fout << "\n" << accountInfo.name << "," << accountInfo.accountNum;
}

/*
Function:			It checks account number passed in with the entire
					document of account_data
Parameters:			A string for account num
Return: 			None.
Description: 		Open the file via the string
					and check the elements to see if
					the number is the one that needs
					to be deleted.
*/
void removeAccount(string accountNum)
{
	int i = 0;
	bool accountFound;
	ifstream fin;
	ofstream fout;
	fin.open("account_data");
	if (fin.fail())
	{
		cout << "Unable to open input file " << endl;
		exit(EXIT_FAILURE); //Exit if caannot open file.
	}
	Account *accounts;
	int size = getNumberofAccounts("account_data");
	accounts = new Account[size];
	
	while(!fin.eof())
	{
		accountFound = false;
		getline(fin, accounts[i].name, ',');
		fin >> accounts[i].accountNum;
		if(accounts[i].accountNum == accountNum)
		{
			accountFound = true;
		}
		i++;	
	}
	fin.close();
	if(accountFound)
	{
		fout.open("account_data");
		if (fin.fail())
		{
			cout << "Unable to open input file " << endl;
			exit(EXIT_FAILURE); //Exit if caannot open file.
		}
		for(int i = 0; i < size; i++)
		{
			if(accounts[i].accountNum != accountNum)
			{
				fout << accounts[i].name << "," << accounts[i].accountNum;
			}
		}
	}
	else
	{
		cout << "There is no account with that number." << endl;
	}
	fout.close();
	
}

/*
Function:			It checks account number passed in and opens the file 
					along with the letter p or b depending on what account
					you are trying to open.
Parameters:			A string for account num and AccountType.
Return: 			Double for account balance.
Description: 		Open the file via the string
					and add the elements to return the sum.
*/
double getCurrentBalance(string accountNum, enum AccountType)
{
	 ifstream fin;
	 double balance = 0;
	 double addBalance;
	 
	 switch (accountType)
	 {
		case Business:
		fin.open(accountNum + "b");
		if (fin.fail())
		{
			cout << "Unable to open input file " << endl;
			exit(EXIT_FAILURE); //Exit if caannot open file.
		}
	
		while(!fin.eof())
		{
			fin >> addBalance;
			balance += addBalance;
		}
	
		fin.close();
	 
		break;
	 
	 
		case Personal:
	 
		fin.open(accountNum + "p");
		if (fin.fail())
		{
			cout << "Unable to open input file " << endl;
			exit(EXIT_FAILURE); //Exit if caannot open file.
		}
		while(!fin.eof())
		{
			fin >> addBalance;
			balance += addBalance;
		}
	
		fin.close();
	
		break;
	 }
	 
	return balance;
}

/*
Function:			It checks account number passed in and opens the file 
					along with the letter p or b depending on what account
					you are trying to open. Then writes a tranaction to that files end.
Parameters:			A string for account num and AccountType.
Return: 			Void.
Description: 		Open the file via the string
					and add the transaction to the end.
*/
void writeTransactions(string accountNum, enum AccountType)
{
	ofstream fout;
	double transaction;
	switch(accountType)
	{
		case Business:
			fout.open(accountNum + "b", ofstream::app);
			if (fout.fail())
			{
				cout << "Unable to open input file " << endl;
				exit(EXIT_FAILURE); //Exit if caannot open file.
			}
			
			cout << "How much do you want to withdraw/deposit: ";
			cin >> transaction;
			fout << "\n" << transaction;
			fout.close();
		break;
		
		case Personal:
			fout.open(accountNum + "p", ofstream::app);
			if (fout.fail())
			{
				cout << "Unable to open input file " << endl;
				exit(EXIT_FAILURE); //Exit if caannot open file.
			}
			cout << "How much do you want to withdraw/deposit: ";
			cin >> transaction;
			fout << "\n" << transaction;
			fout.close();
		break;
		
	}
}

/*
Function:			process_account
Parameters:			A string for account num.
Return: 			Void.
Description: 		use the account number and the account type to call respective functions.
*/
void displayAccount(string accountNum)
{
	double temp;
	ofstream fout;
	ifstream fin;
	double *transactionArra;
	char sortInput;
	int userChoice;
	//AccountType accountType;
	bool loop;
	int size = 0;
	
	do{
		loop = false;
		
		// Ask user to pick account type.
		cout << "What account do you want access (0 = Business, 1 = Personal): ";
		cin >> userChoice;
		
		// Ask the user if they want their stuff sorted.
		cout << "Do you want the information sorted? (Y/N):";
		cin >> sortInput;
		sortInput = toupper(sortInput);
		accountInfo.accountType = AccountType(userChoice);
		
		switch(accountInfo.accountType)
		{
			case Business:
				size = getNumberofTransactions((accountNum + "b"));
				transactionArra = new double[size];
				fin.open(accountNum + "b");
				switch (sortInput)
				{
					case 'Y':
						for(int i = 0; i < size; i++)
						{
							fin >> transactionArra[i];
						}
						
						for(int i = 0; i < (size); i++)
						{
							for (int j = 0; j < (size); j++)
							{
								if(transactionArra[i] < transactionArra[j])
								{
									temp = transactionArra[j];
									transactionArra[j] = transactionArra[i];
									transactionArra[i] = temp;
								}
							}
						}
						
						for(int i = 0; i < size; i++)
						{
							cout << transactionArra[i] << endl;
						}
					break;
					
					case 'N':
						for(int i = 0; i < size; i++)
							{
								fin >> transactionArra[i];
							}
							
						for(int i = 0; i < size; i++)
							{
								cout << transactionArra[i] << endl;
							}
					break;
					
					default:
						loop = true;
					break;
				}
				fin.close();
				delete [] transactionArra;
			break;
			
			
			case Personal:
				size = getNumberofTransactions((accountNum + "p"));
				transactionArra = new double[size];
				fin.open(accountNum + "p");
				switch (sortInput)
				{
					case 'Y':
						for(int i = 0; i < size; i++)
						{
							fin >> transactionArra[i];
						}
						
						for(int i = 0; i < (size); i++)
						{
							for (int j = 0; j < (size); j++)
							{
								if(transactionArra[i] < transactionArra[j])
								{
									temp = transactionArra[j];
									transactionArra[j] = transactionArra[i];
									transactionArra[i] = temp;
								}
							}
						}
						
						for(int i = 0; i < size; i++)
						{
							cout << transactionArra[i] << endl;
						}
					break;
					
					case 'N':
						for(int i = 0; i < size; i++)
							{
								fin >> transactionArra[i];
							}
							
						for(int i = 0; i < size; i++)
							{
								cout << transactionArra[i] << endl;
							}
					break;
					
					default:
						loop = true;
					break;
				}
				fin.close();
				delete [] transactionArra;
			break;
			
			default:
			size = 0;
			cout << "Invalid choice! Please try again." << endl;
			loop = true;
			break;
			}
	}while(loop);
}

/*
Function:			process_account
Parameters:			A string for account num.
Return: 			Void.
Description: 		use the account number and the account type to call respective functions.
*/
void process_account(string accountNum)
{
	int userChoice;
	bool loop;
	bool tryAgain;
	char userChar;
	
	// Ask user to make a choice for which account they want to access
	do{
		loop = false;
		cout << "What account do you want access (0 = Business, 1 = Personal): ";
		cin >> userChoice;
		accountInfo.accountType = AccountType(userChoice);
		switch(accountInfo.accountType)
		{
			case Business:
				writeTransactions(accountNum, accountInfo.accountType);
				cout << "Your new balance is: " << getCurrentBalance(accountNum, accountInfo.accountType) << endl;
			break;
			
			case Personal:
				writeTransactions(accountNum, accountInfo.accountType);
				cout << "Your new balance is: " << getCurrentBalance(accountNum, accountInfo.accountType) << endl;
			break;
			
			default:
			cout << "Invalid choice! Please try again." << endl;
			loop = true;
			break;
			
		}
	}while(loop);
		cout << "Would you like to make another transaction (Y/N): ";
			do{
			tryAgain = false;
			cin >> userChar;
			userChar = toupper(userChar);
			switch (userChar)
				{
					case 'Y':
					loop = true;
					break;
						
					case 'N':
					loop = false;
					break;
						
					default:
					cout << "Invalid choice! Please try again.";
					tryAgain = true;
					break;
				}
			}while(tryAgain);
	
}