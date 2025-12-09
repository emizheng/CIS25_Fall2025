#include <iostream>
#include "CIS Final Project.h"

using namespace std; // state namespace for simpler coding syntax

inline Query querySettings() { // Function for prompting user to input information needed to select which cell in the database to edit
	cout << "Which table would you like to update? Input 1 for Patients and 2 for Results: "; // prompt user to input which table the data entry is in
	int tableNum;
	int colNum;
	cin >> tableNum;

	Query queryDB; // initialize instance of Query struct 

	switch (tableNum) { 
	// switch statement akes user through different series of prompts to input information depending on if the entry to edit is in Patients or Results
	case 1: // series of prompts for if the data entry is in the patients table
		queryDB.idType = "PATIENT_ID"; 
		queryDB.table = "PATIENTS";
		cout << "Please select which column of Patients you'd like to modify. Input 1 for First Name, 2 for Last Name, or 3 for Date of Birth: ";
		cin >> colNum;
		queryDB.colName = getPatientsCol(colNum); // Grabs the column name based on which characteristic of the data entry the user wants to change
		cout << "Please input the ID of the patient you would like to modify: ";
		cin >> queryDB.ID;
		break;
	
	case 2: // series of prompts for if the data entry is in the results table
		queryDB.idType = "TEST_ID";
		queryDB.table = "RESULTS";
		cout << "Please select which column of Results you'd like to modify. Input 1 for Test Name, 2 for Output, 3 for Units, or 4 for Patient ID: ";
		cin >> colNum;
		queryDB.colName = getResultsCol(colNum); // Grabs the column name based on which characteristic of the data entry the user wants to change
		cout << "Please input the ID of the test you would like to modify: ";
		cin >> queryDB.ID;
		break;
	}

	return queryDB; // querySettings function outputs this query object 
}

inline string getPatientsCol(int colNum) { // Function that outputs name of column that is associated with the number that the user inputs
	string colName;
	switch (colNum) { // switch statement to assign colName to the correct string 
	case 1: 
		colName = "FNAME";
		break;
	case 2: 
		colName = "LNAME";
		break;
	case 3: 
		colName = "DOB";
		break;
	}
	return colName; // Returns column name
}

inline string getResultsCol(int colNum) { // Function that outputs name of column that is associated with the number that the user inputs
	string colName;
	switch (colNum) {  // switch statement to assign colName to the correct string 
	case 1:
		colName = "TEST_NAME";
		break;
	case 2:
		colName = "OUTPUT";
		break;
	case 3:
		colName = "UNITS";
		break;
	case 4:
		colName = "PATIENT_ID";
		break;
	}
	return colName; // Returns column name
}