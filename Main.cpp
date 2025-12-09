//Instructions
//Go to Kaggle.com and create a free account if you don’t have one.
//Choose a public dataset that contains structured data(CSV recommended).
//Download the dataset and review its structure.
//Write a C++ program that :
	//Reads from the dataset file(e.g., .csv) using a class
	//Load at least 10 entries(rows) from the dataset
	//Extracts and uses at least 5 fields(columns) from each row
	//Displays the information in a readable format
	//Comment your code to explain logic and file structure

#include <iostream> 
#include <fstream>  
#include <string>   
#include <sstream>  
#include <vector>   
#include "M12.h"

int main() {
	readCSV readWineQT;
	readWineQT.CSVread("WineQT.csv");

}