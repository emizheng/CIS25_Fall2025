#include <iostream>
#include "Module_6_CIS25.h"
#include "Module_6_CIS25.cpp"



int main() {

    Item item1("shoes", 2);


    saveToFile(item1.name, item1.quantity);
    loadFromFile();


    return 0;
}