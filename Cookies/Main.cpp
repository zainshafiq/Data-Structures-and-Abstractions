//Main.cpp

#include <iostream>
#include <fstream>
#include "Cookies.h"

using namespace std;

int main()
{
	Cookies read;
	Cookies display;

	const int size = 10;

	int idNumbers[size];
	int BoxesSold[size] = { 0 };
	int idCount = read.ReadData(idNumbers, BoxesSold, size);
	
	display.DisplayResults(idNumbers, BoxesSold, idCount);
	
	cin.ignore();

	cin.get();

	return 0;
}