//Main Function

#include "PlaneFigure.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char choice;
	int num;

	//Class Objects
	Rectangle *rec;
	Circle *cir;
	Square *squ;
	Triangle *tri;

	cout << " \n Hello! This Program Will Calculate the Area and Perimeter \n\n for Several Simple Figures (Shapes) as Follows;";
	cout << endl << "\n 1. Rectangle \3 \n\n 2. Circle \4 \n\n 3. Square \5 \n\n 4. Triangle \6";
	
	//Repeat Until the User Wants to Quit (Loop)
	do
	{
		cout << " \n\n\n Please Input the Number of Shapes That You Want to Choose (1/2/3/4) \2 : ";
		
		//User Input
		cin >> num;

		switch (num)
		{
			//Rectangle
		case 1:
			rec = new Rectangle;
			rec->perimeter();
			rec->area();
			break;

			//Circle
		case 2:
			cir = new Circle;
			cir->perimeter();
			cir->area();
			break;

			//Square
		case 3:
			squ = new Square;
			squ->perimeter();
			squ->area();
			break;

			//Triangle
		case 4:
			tri = new Triangle;
			tri->perimeter();
			tri->area();
			break;

		default:
			cout << "\n\n \t Error! Your Input Is Invalid! \2 \n";
			break;
		}

		//Asking Whether The User Want to Try Again
		cout << endl << "\n\n Would You Like to Try Again \2 ? (Y/N): ";

		//User Input
		cin >> choice;

		if (choice == 'n' || choice == 'N')
		{
			cout << "\n\n \t Good Bye! Please Come Again Soon! \2 \2 \2" << endl << endl;
		}
		else if (choice != 'y' && choice != 'Y')
		{
			cout << "\n\n \t Error! Good Bye!" << endl << endl;
		}
		
	} while (choice == 'y' || choice == 'Y');

	cout << endl << endl;

	return 0;
}