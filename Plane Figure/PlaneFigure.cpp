//PlaneFigure.cpp

#ifndef PlaneFigure_cpp
#define PlaneFigure_cpp
#include <iostream>
#include "PlaneFigure.h"

using namespace std;

//Rectangle Class
class Rectangle : public PlaneFigure
{
public:
	//Constructor
	Rectangle()
	{
		//Taking Input From User
		cout << "\n\n \t Please Enter the Height (Rectangle): ";
		cin >> height;

		cout << "\n\n \t Please Enter the Width (Rectangle): ";
		cin >> width;
	}

	//Perimeter
	void perimeter()
	{
		cout << "\n\n \t Total Perimeter (Rectangle): " << ((2 * width) + (2 * height)) << " cm" << endl;
	}

	//Area
	void area()
	{
		cout << "\n\n \t Total Area (Rectangle): " << (width * height) << " cm" << endl;
	}

};

//Circle Class
class Circle : public PlaneFigure
{
public:
	//Constructor
	Circle()
	{
		//Taking Input From User
		cout << "\n\n \t Please Enter the Radius (Circle): ";
		cin >> radius;
	}

	//Perimeter
	void perimeter()
	{
		cout << "\n\n \t Total Perimeter (Circle): " << (2 * 3.14 * radius) << " cm" << endl; 
	}

	//Area
	void area()
	{
		cout << "\n\n \t Total Area (Circle): " << (3.14 * radius * radius) << " cm" << endl;
	}

};

//Square Class
class Square : public PlaneFigure
{
public:
	//Constructor
	Square()
	{
		//Taking Input From User
		cout << "\n\n \t Please Enter the Sides (Square): ";
		cin >> side;
	}

	//Perimeter
	void perimeter()
	{
		cout << "\n\n \t Total Perimeter (Square): " << (4 * side) << " cm" << endl;
	}

	//Area
	void area()
	{
		cout << "\n\n \t Total Area (Square): " << (side * side) << " cm" << endl;
	}

};

//Triangle Class
class Triangle : public PlaneFigure
{
public:
	//Constructor
	Triangle()
	{
		//Taking Input From User
		cout << "\n\n \t Enter Side A (Triangle): ";
		cin >> a;

		cout << "\n\n \t Enter Side B (Triangle): ";
		cin >> b;

		cout << "\n\n \t Enter Side C (Triangle): ";
		cin >> c;
	}

	//Perimeter
	void perimeter()
	{
		cout << "\n\n \t Total Perimeter (Triangle): " << (a + b + c) << " cm" << endl;
	}

	//Area
	void area()
	{
		double s = (a + b + c) / 2.0;
		cout << "\n\n \t Total Area (Triangle): " << sqrt(s * (s - a) * (s - b) * (s - c)) << " cm" << endl;
	}

};

#endif