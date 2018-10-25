//Main Function

#include "Hospital.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	myHospital hospital;
	const int AGE = 16; 
	const int ROOMS = 100;
	string rooms[100];
	
	hospital.checkIn(rooms, 100);
	hospital.checkOut();
	
	return 0;
}

