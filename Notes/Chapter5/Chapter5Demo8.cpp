/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Array Demo!
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	const int SIZE = 5;
	int num[SIZE];
	int sum = 0;
	srand(time(NULL));
	
	for (int i=0; i<SIZE; ++i)
	{
		int random=(rand() % 11) + 10;
		num[i] = random;
		sum+=num[i];
		cout << random << endl;
	}
	
	cout << "Sum = " << sum << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
