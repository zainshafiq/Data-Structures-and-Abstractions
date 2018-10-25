//Cookies.h

#ifndef Cookies_h
#define Cookies_h

#include <iostream>
#include <string>

using namespace std;

class Cookies
{
public:
	bool IsFull() const;
	int LengthIs() const;
	void RetrieveItem(int id[], bool& found);
	void InsertItem(int id[], int boxes[], int size);
	void DeleteItem(int id[], int boxes[], int size);
	void ResetList();
	void GetNextItem(int id[], int boxes[], int size);
	
public:
	int ReadData(int id[], int boxes[], int size);
	int FindWinner(int boxes[], int size);
	void DisplayResults(int id[], int boxes[], int size);
	int LinearSearch(int arr[], int size, int target);
};

#endif
#include "Cookies.cpp"

