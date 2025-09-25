//Create a class Item with :
//	string name
//	int quantity
//	A method saveToFile() to write item data in the format : name, quantity
//	A method loadFromFile() to read and display data from the file
//In your main() function :
//	Create an instance of Item
//	Assign values to its members
//	Call saveToFile() to write the data to a file called items.txt

#include "Module_6_CIS25.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


inline Item::Item(std::string name, int quantity) : name{ name }, quantity{ quantity } {}

inline void saveToFile(std::string name, int quantity) {
	fstream myFile;

	myFile.open("items.txt", ios::app);
	if (myFile.is_open()) {
		myFile << name << ", " << quantity << '\n';
		myFile.close();
	}
}

inline void loadFromFile(){
	fstream myFile;

	myFile.open("items.txt", ios::in);
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line)) {
			cout << line << endl;
		}
	}
}