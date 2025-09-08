/*
Instructions are to reate a program that:
(1) Accepts user input for item name, quantity, and cost
(2) Calculates and displays the total cost
*/

#include <iostream>
#include <vector>
#include <ranges>

int main() {

	std::cout << "Welcome to Mervyns!";

	char finished = 'N';

	std::vector<std::string> itemNames;
	std::vector<int> itemQuantities;
	std::vector<double> itemCosts;

	do {

		std::string item;
		int quantity;
		double cost;

		std::cout << "What is the name of the item? ";
		std::cin >> item;
		std::cout << "What is the quantity of the item? ";
		std::cin >> quantity;
		std::cout << "What is the cost of the item? ";
		std::cin >> cost;

		itemNames.push_back(item);
		itemQuantities.push_back(quantity);
		itemCosts.push_back(cost);

		std::cout << "Are you finished with checking out? Type Y for yes, and N for not finished yet (Case sensitive, do not add spaces!!): ";
		std::cin >> finished;

	} while (finished == 'N');
	
	int itemCount = itemCosts.size();

	double totalCost = 0;
	for (int i = 0; i < itemCount; i++) {
		totalCost = totalCost + itemQuantities[i] * itemCosts[i];
	}


	std::cout << "Receipt\n";
	std::cout << "Item Name | Quantity | Cost per Item\n";
	for (int i = 0; i < itemCount; i++) {
		std::cout << itemNames[i] << " | " << itemQuantities[i] << " | $" << itemCosts[i] << '\n';
	}

	std::cout << "Your total cost is: $" << totalCost;

	return 0;
}