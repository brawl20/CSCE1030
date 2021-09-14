/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			2/26/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	third of 3 lab assignments.

*/
#include "stdio.h"
#include "stdlib.h"


int main()
{
	FILE * fileptr;
	
	fileptr = fopen("output.dat" , "w");
	
	fprintf(fileptr, "Hello World!");
	
	fclose(fileptr);
	
	return 0;
}