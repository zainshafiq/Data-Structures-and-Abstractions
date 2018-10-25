//PlaneFigure.h

#ifndef PlaneFigure_h
#define PlaneFigure_h
#include <iostream>

using namespace std;

//Defining Base Class
class PlaneFigure
{
	//Member Variables that are accessible by other classes which inherit from that class
protected:
	//Rectangle
	double height, width;

	//Circle
	double radius;

	//Square
	double side;

	//Triangle
	double a, b, c;

public:
	//Defining (2) methods for Base Class
	void perimeter();
	void area();
};

#endif
#include "PlaneFigure.cpp"