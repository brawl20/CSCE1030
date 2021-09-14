/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is the first of three LAB assignments. 
					This one is using the native C methods to print outputs to the user as well as accept inputs.

*/

#include <iostream>
using namespace std;

int main()
{
	// Variable initialization/decleration.
	
	int a,b;
	double c,d;
	
	// Get input from the user and assign variables appropiatley.
	printf ("Please type in a integer\n");
	scanf ("%i",&a);
	printf ("Please type in another integer\n");
	scanf ("%i",&b);
	printf ("Please type in another double\n");
	scanf ("%lf",&c);
	printf ("Please type in another double\n");
	scanf ("%lf",&d);
	
	
	// Output the value to the user.
	printf ("---------------------------------------------------------\n"); // Added this to make the end product look better. Purely looks.
	printf ("You put in %i for your first initger.\n", a);
	printf ("You put in %i for your second initger.\n", b);
	printf ("You put in %lf for your first double.\n", c);
	printf ("You put in %lf for your second double.\n", d);
	printf ("Your second double is %e in scientific notation.\n", d);
	
	
	
	
	return 0;
}
