#pragma once
//#ifdef M9CIS25_H
//#define M9CIS25_H

#include <iostream>

class Item {
public:
	std::string name;
	int quantity;
};

Item* createInventory(int size);
void printInventory(Item* inventory, int size);
void searchInventory(Item* inventory, int size);

//#endif //M9CIS25_H

