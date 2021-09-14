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



const int SIZE = 5;
int main()
{
	double arr[SIZE]= {1.1, -2.2, 3.3, 4.4, 5.5};
	
	double* ptr;
	
	ptr=arr;

	//Name of the array is a pointer. And it is pointing at the first element of the array.
	
	cout << "Address:" << arr << endl;
	cout << "Value:" << *arr << endl;
	cout << "arr[0]:" << arr[0]<<endl;
	cout << "arr[0]:" << &arr[0]<<endl;
	//arr[0] = *arr & arr = &arr[0]
	
	cout << "Address:" << arr+1 << endl;
	cout << "Value:" << *(arr+1) << endl;
	cout << "arr[1]:" << arr[1]<<endl;
	cout << "arr[1]:" << &arr[1]<<endl;
}