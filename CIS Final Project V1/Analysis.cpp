#include "CIS Final Project.h"
#include <sqlite3.h>
#include <format>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

static int PosNegAnalysis(const char* dirDB);
static int callback(void* NotUsed, int argc, char** argv, char** azColName);

inline int PosNegAnalysis(const char* dirDB) {
	sqlite3* DB;
	int exit = sqlite3_open(dirDB, &DB);
	string test;
	vector<int*>* results;

	string sqlGetData = "SELECT OUTPUT FROM RESULTS WHERE TEST_NAME = COVID19;";
	sqlite3_exec(DB, sqlGetData.c_str(), callback, &results, NULL);
	cout << results << endl;

	return 0;
}

static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
	for (int i = 0; i < argc; i++) {
		cout << azColName[i] << ": " << argv[i] << endl;
	}
	cout << endl;
	return 0;
}