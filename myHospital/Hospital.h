//Hospital.h

#ifndef HOSPITAL_h
#define HOSPITAL_h
#include <iostream>
#include <string.h>

using namespace std;

class myHospital
{	
public:	
	int checkIn(string[], int);
	void hosCode();
	void checkOut();
};

class myDoctor
{
protected:
	string docName;
	int docRoom;
	string docCode;
public:
	myDoctor();
	~myDoctor();
	string Doctors(string[], int);
};

class myPatient
{
protected:
	string patName;
	int patAge;
	string patCode;
	int patRoom;
public:
	myPatient();
	~myPatient();
	int Patients();
};

#endif
#include "Hospital.cpp"