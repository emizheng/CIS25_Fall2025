#pragma once
//#ifdef CIS_FINAL_PROJECT_H
//#define CIS_FINAL_PROJECT_H

#include <string>
#include <map>
using namespace std;

struct Query { // initialization of Query struct
	string colName;
	string table;
	string ID;
	string idType;
};

// Initialize functions from CIS FInal Project Small Functions.cpp
Query querySettings(); 
string getPatientsCol(int colNum);
string getResultsCol(int colNum);


//#endif CIS_FINAL_PROJECT_H