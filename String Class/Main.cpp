//Main Function

#include "StringClass.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	MyString s1;                                            
	MyString s2 = "University ";
	MyString s3 = "of Regina";
	MyString s4(s2);

	cout << "\n Hello! This Program Will Show Us on How Does C++ Functioning with a Class, \n\n Constructors and Destructors, ";
	cout << "Member Functions Outside of the Class Body, \n\n a Copy Constructor and Assignment Operator \2 \2 ." << endl << endl;


	//Default Constructors
	cout << endl << "\n Constructors \4 ." << endl;
	cout << "\n Default Constructor \t-- The value of MyString s1: ";                       
	s1.Put();																				//Suppose to Return Nothing

	//Copy Constructor
	cout << endl << "\n Copy Constructor \t-- The value of MyString s2: ";				
	s2.Put();																				//Return s2
	cout << endl << "\n Copy Constructor \t-- The value of MyString s3: ";
	s3.Put();																				//Return s3
	cout << endl << "\n Copy Constructor \t-- The value of MyString s4, content from s2: "; 
	s4.Put();																				//Return s4
	
	//Operator Overloading
	cout << endl << "\n Operator Overloading \5 ." << endl;
	cout << "\n s2 + s3 : ";
	s2 + s3; 
	s2.Put();                                                                               //Return s2 + s3
	cout << endl << "\n s1 = s2 : ";
	s1 = s2;																				//Overload s1 = s2
	s1.Put();                                                                               //Return s1 = s2 

	//Reverse Function
	cout << endl << endl << "\n Reverse function \6 ." << endl;
	cout << "\n s1 : ";
	s1.Put();                                                                               //Return s1 before Reverse
	cout << endl << "\n Reversing s1 : ";
	s1.Reverse();                                                                           //Reversing s1
	s1.Put();																				//Return s1 after Reverse
	
	//End of the Program, Destructor Function Called Automatically
	cout << endl << "\n End of the Program, Destructor Function Called Automatically. Good Bye! \3 \3 \3 \n" << endl << endl << endl;

	return 0;
}

