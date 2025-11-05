
//By now, you should have a solid understanding of how to build a basic application — one that takes user input, responds 
// to the user, saves data, and retrieves it for display. In this module, you’ll apply that knowledge to create a simple 
// Inventory Management System. You’ll also have the freedom to explore and draw on resources from across the internet to 
// enhance your program.
//
//Topics: Arrays, loops, class usage, basic inventory tracking
//Description:In this module, you will use arrays to manage a small inventory system. You’ll create an Item class and store 
// multiple items in an array. You'll write functions to add items, display them, and search for an item by name.
//
//Key Concepts:
//Arrays: Store a fixed number of items using an array of objects.
//Loops: Use loops to populate and display the inventory.
//Basic Class Use: Create and interact with objects stored in an array.


//Instructions:
//Create a class called Item with :
//string name
//int quantity
//In main() :
//	Create an array of Item objects(e.g., size 5)
//	Ask the user to enter the name and quantity for each item
//	Display all items in the inventory using a loop
//	Add a function to :
//Search for an item by name
//Display its quantity if found
//(Optional) You’re encouraged to make it your own — add new features, improve the interface, or expand its functionality.
// Use the vast resources of the internet to explore ideas and take your program further.




#include "Module_9_CIS25.h"
#include <iostream>
#include <array>
#include <string>
#include <algorithm>

inline Item* createInventory(int size) {
	const int inventorySize = size;
	Item* inventory = new Item[inventorySize];

	for (int i = 0; i < inventorySize; i++) {
		std::cout << "Name of item #" << i + 1 << ": " << '\n';
		std::getline(std::cin, inventory[i].name);
		std::cout << "Quantity of item #" << i + 1 << ": " << '\n';
		std::cin >> inventory[i].quantity;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::sort(inventory, inventory + size, [](const Item& a, const Item& b) {
		return a.name < b.name;
		});

	return inventory;
}

inline void printInventory(Item* inventory, int size) {
	std::cout << "Inventory List" << std::endl;
	std::cout << "Name of Item          | Quantity" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << inventory[i].name << "      " << inventory[i].quantity << std::endl;
	}
}

inline void searchInventory(Item* inventory, int size) {
	std::string itemName;
	std::cout << "Please enter the name of the item that you are looking for: " << '\n';
	std::getline(std::cin, itemName);

	int first = 0;
	int last = size;
	while (first <= last) {
		int middle = first + (last - first) / 2;
		if (inventory[middle].name == itemName) {
			std::cout << "Name: " << inventory[middle].name << "   Quantity: " << inventory[middle].quantity << std::endl;
			break;
		}
		else if (inventory[middle].name < itemName) {
			first = middle + 1;
		}
		else {
			last = middle - 1;
		}
	}
}
