#pragma once
#ifndef M12_H
#define M12_H

#include <iostream> 
#include <fstream>  
#include <string>   
#include <sstream>  
#include <vector> 

using namespace std;

class readCSV
{
public:
	void CSVread(string path) {
		std::ifstream inputFile(path); // opens file

		if (!inputFile.is_open()) { // Checks if there was an error in opening the file
			std::cerr << "Error opening file!" << std::endl;
			return;
		}

		std::string line;
		while (std::getline(inputFile, line)) { // Loops through all the rows of the csv file
			std::stringstream ss(line);
			std::string cell;
			std::vector<std::string> rowData;

			while (std::getline(ss, cell, ',')) { // sets the separator as the comma
				rowData.push_back(cell); // Goes through column to add each piece of data to the overall row data
			}

			for (const std::string& data : rowData) {
				std::cout << data << "\t"; // prints the contents of each row in the csv file
			}
			std::cout << std::endl;
		}

		inputFile.close();
	}
private:

};

#endif