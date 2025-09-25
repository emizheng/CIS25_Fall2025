#pragma once
//#ifdef M6CIS25_H
//#define M6CIS25_H

#include <iostream>
class Item {
public: 
	int quantity;
	std::string name;

	Item(std::string name, int quantity);

};


void saveToFile(std::string name, int quantity);
void loadFromFile();

//#endif // M6CIS25_H