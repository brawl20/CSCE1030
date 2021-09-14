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
	/* problem with scalablitity
	int age1, age2, age3;
	
	int sum=(age1+age2+age3);
	
	cout << static_cast<double>(sum)/3.0 << endl;
	*/
	
	/* Problem with memory
	int age;
	int sum = 0;
	
	for (int i=0; i < 3; ++i)
	{
		cin >> age;
		sum+=age;
	}
	cout << static_cast<double>(sum)/3.0 << endl;
	*/
	
	//Array! :Collection of data within the same data type!
	
	int array[5]; //An array of 5 intigers variables
	double array2[10]; // An array of 10 doubles.
	
	cin >> array[0]; // First memeber of the array
	cin >> array[1]; // Second
	cin >> array[2]; // Third
	cin >> array[3]; // Fourth
	cin >> array[4]; // Fifth, biggest index is (size - 1), which is 4 in this case.
	
	
	return 0;
}
