/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			
	Instructor:		Dr. Pradhumna Shrestha
	Description:	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x = 2.0, y = 3.0
	
	//if (x/y == 0.667 ) //don't use equality or inequality of flaoting point variable.
	if (fabs(x/y - 0.667 ) < 1e-5)
	{
		cout << "It is correct" << endl;
	}
	else 
	{
		cout << "It is incorrect" << endl;
	}
	
return 0;
}
