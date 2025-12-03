// Topics: Class constructors, destructors, object lifecycle

//Description
//In this module, you'll explore how constructors and destructors manage the creation and cleanup of objects in C++. 
//You’ll define a Product class with attributes like id, name, and price, and observe the order of object 
//lifecycle events by printing messages from the constructor and destructor.

//Instructions
//Create a Product class with :
	//Private attributes : id, name, and price
	//A constructor to initialize these values
	//A destructor that displays a message
	//A method printDetails() to display the product's information
	//In main(), create a Product object with values of your choice and call printDetails() to verify.

#include <iostream>
using namespace std;

class Product {
	int id;
	string name;
	float price;
public:
	Product(int i, string n, float p) {
		id = i;
		name = n;
		price = p;
		cout << "The constructor has assigned the values for id, name, and price for the product. \n";
	}

	void printDetails(){
		cout << "Here is the item information \n ID: " << id << " | Name: " << name << " | Price: " << price << endl;
	}

	~Product() {
		cout << "Destructor activated - this object has been destroyed. \n";
	}
};

int main() {

	int id;
	string name;
	float price;

	cout << "What is the product id? \n";
	cin >> id;
	cout << "What is the name of the product? \n";
	cin >> name;
	cout << "What is the price of the product? \n";
	cin >> price;

	Product item(id, name, price);
	item.printDetails();

	return 0;
}
