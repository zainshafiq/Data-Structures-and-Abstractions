//Cookies.cpp

#ifndef Cookies_cpp
#define Cookies_cpp
#include <iostream>
#include <fstream>
#include "Cookies.h"

using namespace std;

bool Cookies::IsFull() const
{
	// Function: Determines whether list is full.
	// Pre: List has been initialized.
	// Post: Function value = (list is full)
	
	int list;

	if (list > 10)
		cout << "The List is Full!!" << endl << endl;
}



int Cookies::LengthIs() const
{
	// Function: Determines the number of elements in list.
	// Pre: List has been initialized.
	// Post: Function value = number of elements in list

	for (int i = 0; i<size; i++)
	{
		if (arr[i] == target)
			return i;
	}

	return -1;
}


void Cookies::RetrieveItem(int id[], bool& found);
{
	// Function: Retrieves list element whose key matches item's
	// key (if present).
	// Pre: List has been initialized.
	// Key member of item is initialized.
	// Post: If there is an element someItem whose key matches
	// item's key, then found = true and item is a copy of
	// someItem; otherwise found = false and item is unchanged.
	// List is unchanged.

	int classCount = 0;
	int idNum, index, cookies;

	string fileName;
	ifstream infile;

	cout << "Enter file name: ";

	cin >> fileName;

	infile.open(fileName.c_str());

	while (!infile.eof())
	{
		infile >> idNum >> cookie;
		index = LinearSearch(id, classCount, idNum);

		if (index<0)
		{
			id[classCount] = idNum;
			boxes[classCount] = cookie;
			classCount++;
		}

		else
		{
			infile >> cookie;
			boxes[index] += cookie;
		}
	}

	return classCount;
}


void Cookies::InsertItem(int id[], int boxes[], int size);
{
	// Function: Adds item to list.
	// Pre: List has been initialized.
	// List is not full.
	// item is not in list.
	// Post: item is in list.

	int classCount = 0;
	int idNum, index, cookies;

	string fileName;
	ifstream infile;

	cout << "Enter file name: ";

	cin >> fileName;

	infile.open(fileName.c_str());

	while (!infile.eof())
	{
		infile >> idNum >> cookie;
		index = LinearSearch(id, classCount, idNum);

		if (index<0)
		{
			id[classCount] = idNum;
			boxes[classCount] = cookie;
			classCount++;
		}

		else
		{
			infile >> cookie;
			boxes[index] += cookie;
		}
	}

	return classCount;
}


void Cookies::DeleteItem(int id[], int boxes[], int size);
{
	// Function: Deletes the element whose key matches item's key.
	// Pre: List has been initialized.
	// Key member of item is initialized.
	// One and only one element in list has a key matching
	// item's key.
	// Post: No element in list has a key matching item's key.
	
	while (item)
	{
		list_link* old = item;
		item = item->next;
		delete old;
	}
}


void Cookies::ResetList();
{
	// Function: Initializes current position for an iteration
	// through the list.
	// Pre: List has been initialized.
	// Post: Current position is prior to list.

	int num = 0;

	if (resetSize) 
	{
		delete[] element; element = 0; 
		array_size = 0;
	}
}


void Cookies::GetNextItem(ItemType& item)
{
	// Function: Gets the next element in list.
	// Pre: List has been initialized and has not been changed since
	// last call.
	// Current position is defined.
	// Element at current position is not last in list.
	// Post: Current position is updated to next position.
	// item is a copy of element at current position.

	for (int i = 0; i<size; i++)
	{
		if (arr[i] == target)
			return i;
	}

	return -1;
}


int Cookies::ReadData(int id[], int boxes[], int size)
{
	int classCount = 0;
	int idNum, index, cookies;

	string fileName;
	ifstream infile;

	cout << "Enter file name: ";

	cin >> fileName;
	
	infile.open(fileName.c_str());
	
	while (!infile.eof())
	{
		infile >> idNum >> cookie;
		index = LinearSearch(id, classCount, idNum);

		if (index<0)
		{
			id[classCount] = idNum;
			boxes[classCount] = cookie;
			classCount++;
		}

		else
		{
			infile >> cookie;
			boxes[index] += cookie;
		}
	}
	
	return classCount;
}



int Cookies::FindWinner(int boxes[], int size)
{
	int winner = 0;
			
	for (int i = 1; i<size; i++)
	{
		if (boxes[i]>boxes[winner])
			winner = i;
	}

	return winner;
}



void Cookies::DisplayResults(int id[], int boxes[], int size)
{
	int winner;
	
	cout << "\n Results for Cookie Sale: " << endl	<< "               " << endl << "Class Number of Boxes Sold " << endl;

	for (int i = 0; i<size; i++)
	{
		cout << id[i] << "\t" << boxes[i] << endl;
	}

	winner = FindWinner(boxes, size);

	cout << "The Winner is: " << id[winner] << " with a sale of " << boxes[winner] << " boxes!" << endl;
}



int Cookies::LinearSearch(int arr[], int size, int target)
{

	for (int i = 0; i<size; i++)
	{
		if (arr[i] == target)
			return i;
	}

	return -1;
}

#endif 