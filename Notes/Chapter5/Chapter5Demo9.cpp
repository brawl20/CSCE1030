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
	int arr[5];
	int arr2d[5][6];
	
	double arr_dbl[4]={1.1,2.2,3.3,4.4};
	
	double arr_dbl_2D[3][4] = {	
							{1.1,   2.2,   3.3,   4.4},
							{5.5,   6.6,   7.7,   8.8},
							{9.9, 10.10, 11.11, 12.12}
							};
	
	
	cout << arr_dbl_2D[0][0] << endl;
	cout << arr_dbl_2D[2][3] << endl;
	
	arr_dbl_2D[1][3] = (arr_dbl_2D[0][0] + arr_dbl_2D[0][1]);
	
	cout << arr_dbl_2D[1][3] << endl;
	
	
	
	
	
	return 0;
}
