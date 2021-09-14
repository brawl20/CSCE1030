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
	int const SIZE = 5;
	int nums[SIZE] = {20, 9, 11, 85, 3};
	int temp;
	for (int add=0; add < SIZE; ++add){
		for (int i=(1 + add); i < SIZE; ++i){
			if (nums[0+add] < nums[i])
			{
			temp = nums[0+add];
			nums[0+add] = nums[i];
			nums[i] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; ++i)
	{
	cout << nums[i] << endl;
	}
	return 0;
}
