//Hospital.cpp

#ifndef HOSPITAL_cpp
#define HOSPITAL_cpp
#include <iostream>
#include <string.h>
#include "Hospital.h"

using namespace std;

int myHospital::checkIn(string rms[], const int SIZE)
{
	int sz;
	sz = SIZE;
	string RMS[100];
	char doctor = 'D';
	char patient = 'P';
	char input;
	int num;

	cout << "Welcome to the Kingdom Hospital!! To the most Humble, Professional but Haunted Hospital Ever Built!! " << endl << endl;
	cout << "Are you a Doctor(D) or patient (P)?" << endl;
	cin >> input;

	if (input == 'D'|| input =='d')
		Doctors(RMS, 100);
	else if (input == 'P'||input == 'p')
		Patients();
	else
	{
		cout << "Error!! Please try again." << endl << endl;
		cin >> input;
	}
	
	return 0;
}

void myHospital::checkOut()
{
	char doctor = 'D';
	char patient = 'P';
	char input;
	int num;

	cout << "Welcome to the Kingdom Hospital!! To the most Humble, Professional but Haunted Hospital Ever Built!! " << endl << endl;
	cout << "Are you a Doctor(D) or patient (P)?" << endl;
	cin >> input;
	
	if (input == 'D' || input == 'd')
		Doctors(RMS, 100);
	else if (input == 'P' || input == 'p')
	{
		patients pat;
		cout << "Welcome!! Please enter your name -- > ";
		getline(cin, pat.pName);
		
		cout << pat.pName << "Please enter your age-- > ";
		cin >> pat.age;
		
		cout << pat.pName << " Please select a code from the list below. " << endl;
		hosCode();
		getline(cin, pat.hosCode);
		
		Queue<patients> pnts;
		pnts.dequeue(pat);
	}
	else
	{
		cout << "Error!! Please try again!!" << endl;
		cin >> input;
	}
}

void myHospital::hosCode()
{
	const int CODES = 12;
	
	string code[CODES] = { "PED Pediatrics ", "GEN General Pratice ", "INT Internal Medicine ",
		"CAR Cardiology ", "SUR Surgeon ", "OBS Obstetrics ", "PSY Psychiatry ", "NEU Neurology ",
		"ORT Orthopedics ", "DET Dermatology ", "OPT Ophthalmology ", "ENT Ear, Nose, and Throat" };
	
	for (int i = 0; i < CODES; i++)
		cout << code << endl;
}

string myDoctor::Doctors(string roms[], int siz)
{
	int size;
	string rooms[100];
	doctors doc;
	cout << "Welcome Doctor! Please key in your name -- > ";
	cin >> doc.docName;
	
	cout << doc.docName << "Please key in the room number that you would like to proceed -- > ";
	cin >> doc.docRoom;
	
	rooms[doc.docRoom] == doc.docName;
	cout << doc.docName << "Please key in your specialty code -- > ";
	hosCode();
	
	getline(cin, doc.code);
	return rooms[doc.docRoom];
}


int myPatient::Patients()
{
	patients pat;
	cout << "Welcome!! Please enter your name -- > ";
	getline(cin, pat.pName);

	cout << pat.pName << "Please enter your age -- > ";
	cin >> pat.age;
	cout << pat.pName << " Please select a code from the list below. " << endl << endl;
	hosCode();
	getline(cin, pat.hosCode);
	
	Queue<patients> pnts;
	pnts.enqueue(pat);

	return 0;
}

#endif