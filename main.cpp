//Create a base class User with a virtual method accessLevel().
//Create a derived class Employee that overrides accessLevel().
//Create another derived class InventoryManager that inherits from Employee and overrides accessLevel() as well.
//In main(), create an InventoryManager object and call the accessLevel() method to demonstrate which version is executed.
//Use header files in your code.

#include <iostream> 
using namespace std;
#include "M10.h"


int main() {
	InventoryManager groceryManager;
	cout << "Grocery Manager Access Level: ";
	groceryManager.accessLevel();

	Employee cashier;
	cout << "Cashier Access Level: ";
	cashier.accessLevel();

	User customer;
	cout << "User Access Level: ";
	customer.accessLevel();
	return 0;
}