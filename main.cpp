#include <iostream>
#include "Module_9_CIS25.h"
#include "Module_9_CIS25.cpp"



int main() {

    int size;
    std::cout << "Total # of items in your shoe inventory. Whole numbers only please!: " << std::endl;
    std::cin >> size;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    Item* shoes = createInventory(size);

    std::string option;
    do {
        std::cout << "\n\nHere is the lowercase letter you should enter for what you want to do with the inventory: " << std::endl;
        std::cout << "p to Print Inventory | s to Search Inventory | q to Quit " << std::endl;
        std::cin >> option;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (option == "p") {
            printInventory(shoes, size);
        }
        else if (option == "s") {
            searchInventory(shoes, size);
        }
        else {
            continue;
        }
    } while (option != "q");

    delete[] shoes;
    return 0;
}