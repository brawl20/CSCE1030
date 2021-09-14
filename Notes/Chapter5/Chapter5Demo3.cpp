/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/24/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	Common errors in loops.
*/

#include <iostream>

using namespace std;

int main()
{
	/*
	int i =1;
	
	while (i<=10)
	{
		cout << i << endl;
		++i; // same as 1+=i; or i=1+i;
	}
	 i = 10;
	
	while(i>=1)
	{
		cout << i << endl;
		--i;
	}
	*/
	
	//One-off error
	int i = 1;
	while(i<=10)
	{
		cout << i << endl;
		++i;
	}
return 0;
}
