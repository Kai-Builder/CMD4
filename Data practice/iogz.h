#pragma once
#include "framework.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;


// IOGZ: Holds logic for Most basic Functions.

/*
	iogz stores data of all functions breaking apart the app
	iogz is used for modding and other things

*/

void OnHelp() {
	cout << "Current Session Help\n";
	cout << CommandLibraryshowcase[0] << "\n" << CommandLibraryshowcase[1] << "\n" << CommandLibraryshowcase[2] << "\n";
}
int onGetch() {
	string command;
	cin >> command;
	if (command == "GetChildren")
	{
		cout << CommandLibraryshowcase[1];
		cout << "The getch command is a integrated command which gets all children of specified command.\n";
		cout << "Command Input: " << command << "\n";
	}
	else if (command == "CDTCustom")
	{
		cout << CommandLibraryshowcase[2];
		cout << "The Custom data type is used to store different Values in given Storage link.\n";
		cout << "Available Storage links:";
		for (unsigned i = 0; i < AvailableStorageLinks.size(); ++i) {
			cout << AvailableStorageLinks.at(i) << "\n";
		}
		
	}
	else {
		cout << "Pre-Defined Getchildren Command.\n";
	}
	return 0;
}
int strt()
{
	char cName[100];
	cin.getline(cName, 100);
	cout << cName << "\n";
	return 9;
}
