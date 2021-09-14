/*
	Author:			Micheal Landsbaum (MichealLandsbaum@my.unt.edu)
	Date:			3/1/2021
	Instructor:		Dr. Pradhumna Shrestha
	Description:	This is the exam!!!!

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum Colors {Yellow = 'Y', Green = 'G', Blue = 'B'};
	double surfaceArea;
	double paintCost = 0;
	char colorPick;
	int yellow_paint;
	int green_paint;
	int blue_paint;
	char userContinue;
	bool paintAgain;
	
	srand(time(NULL));
	yellow_paint = (rand() % 5) + 25;
	green_paint = (rand() % 10) + 30;
	blue_paint = (rand() % 10) + 40;
	do {
			cout << "What is the surface area of the area you want to paint?:";
			cin >> surfaceArea;
			cout << "What color paint would you like to use? (Y/G/B):";
			cin >> colorPick;
			colorPick = toupper(colorPick);
			switch (colorPick){
		
				case Yellow:
					paintCost = (yellow_paint*surfaceArea)+paintCost;
				break;
		
				case Green:
					paintCost = (green_paint*surfaceArea)+paintCost;
				break;
		
				case Blue:
					paintCost = (blue_paint*surfaceArea)+paintCost;
				break;
		
				default:
					cout << "The color you entered was invalid." << endl;
				break;
		
			}
	
		cout << "Would you like to continue?(Y/N): ";
		cin >> userContinue;
	
		if(userContinue == 'y' || userContinue == 'Y')
		{
			paintAgain = true;
		}
		else
		{
			paintAgain = false;
		}
	}while(paintAgain == true);

std::fixed;
std::setprecision(2); 
cout << "The total cost will be: $" << paintCost << endl;
	return 0;
}