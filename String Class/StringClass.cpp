//StringClass.cpp

#ifndef StringClass_cpp
#define StringClass_cpp

#include <iostream>
#include "StringClass.h"
#include <string.h>

using namespace std;

//Constructor --- Create Empty String
MyString::MyString()										
{
	length = 0;                                             //initializing Array to 0
	pData = new char[NULL];
	pData[length] = '\0';									//Null character (\0) Used to Mark the End of the String
}

//Constructor --- Creating a String Whose Data is a Copy of cString
MyString::MyString(char *cString)                       
{
	length = strlen(cString);                               //Getting the Length of String We are Copying
	this->pData = new char[length + 1];                     //Creating Array to Hold the cString
	for (int i = 0; i < length; i++)                        //Copying Array
	{
		pData[i] = cString[i];
	}
	pData[length] = '\0';                                   //Null character (\0) Used to Mark the End of the String
}

//Destructor
MyString::~MyString()									    //Destructs or Deletes an Object (Array)
{
	if (pData != NULL)
	{
		delete[] pData;
		pData = NULL;
		length = NULL;
	}
}

//Override the Default Copy Constructor
MyString::MyString(MyString const& s)                       //Initializes a New Object from an Existing Object (Array)
{
	length = s.length;                              
	this->pData = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		pData[i] = s.pData[i];                              //Make Mystring into Current cString
	}
	pData[length] = '\0';                                   //Null character (\0) Used to Mark the End of the String
}

//Override Default Assignment Operator
MyString& MyString::operator=(MyString const& s)            //Replaces the Contents of Existing Object (Array)
{															//Copy Values from (1) Object to Another Already Existing Object
	length = s.length;
	for (int i = 0; i < s.length; i++)
	{
		this->pData[i] = s.pData[i];
	}
	pData[length] = '\0';									//Null character (\0) Used to Mark the End of the String

	return *this;
}

//Output String
void MyString::Put()
{
	for (int i = 0; pData[i] != '\0'; i++)                  
	{
		cout << pData[i];
	}
}

//Reverse the String
void MyString::Reverse()
{
	int max = length - 1;
	char temp = NULL;									    //Create a temp Value to Hold the Value to be Swapped
	for (int i = 0; (max - i) >= 1; i++)
	{
		temp = pData[i];
		this->pData[i] = this->pData[max];
		this->pData[max] = temp;
		max--;
	}
}

//Concatenation Operator
MyString& MyString::operator+(MyString const& s)            //Operation of Joining Object (Array), Lhs and Rhs
{
	int lLength = length;
	length = lLength + s.length;
	for (int i = lLength; i < length; i++)
	{
		this->pData[i] = s.pData[i - lLength];
	}
	this->pData[length] = '\0';                             //Null character (\0) Used to Mark the End of the String

	return *this;
}

#endif