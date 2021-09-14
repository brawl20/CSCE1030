/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	char arr[]={'b','f','a','z','m','g','q','t'};
	int temp;
	for(int i=0; i<8; ++i)
	{
		for (int j=i+1; j<8; ++j)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i]; // assign temp so swap can be made.
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0; i<8; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}