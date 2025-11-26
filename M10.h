#pragma once
//#ifdef M10_H
//#define M10_H
#include <iostream> 
using namespace std;

class User {
public:
	virtual void accessLevel() {
		cout << "This is the general user access level. You can only see your own information." << endl;
	}
};

class Employee : public User {
public:
	void accessLevel() override {
		cout << "This is the access level for employees only!!" << endl;
	}
};

class InventoryManager : public Employee {
public:
	void accessLevel() override {
		cout << "This access level is for Inventory Manger only! Can see all of the inventory for the company." << endl;
	}
};

//#endif // M7CIS25_H