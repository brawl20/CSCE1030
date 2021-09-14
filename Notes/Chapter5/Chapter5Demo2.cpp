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
	
	int sum = 0;
	const int SIZE=10;
	int num[SIZE]; //An array of 5 intigers variables
	/*for (int i=0; i < num; ++i)
	{
		cout << "Enter #" << i+1 << "intiger:"
		cin >> num;
		sum += num;
	}
	cout << "Sum=" << sum << endl;
	*/
	
	
	for (int i=0; i < SIZE; ++i)
	{
		cin >> num[i];
		sum += num[i];
	}
	cout << "Sum=" << sum << endl;
	
	return 0;
}
