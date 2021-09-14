#ifndef HEADER
#define HEADER
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
const int accountNumberLength = 6;
enum AccountType {Business = 0, Personal = 1,};
enum Choice {Add = 1, Remove = 2, Process = 3, Display = 4, Quit = 5,};
struct Account
{
	string name;
	string accountNum;
	AccountType accountType;
};


void getName();
void getAccountNumber();
int getNumberofTransactions(string fileName);
int getNumberofAccounts(string fileName);
void addAccount();
void removeAccount(string accountNum);
double getCurrentBalance(string accountNum, enum AccountType);
void writeTransactions(string accountNum, enum AccountType);
void displayAccount(string accountNum);
void process_account(string accountNum);
#endif