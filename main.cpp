#include <iostream>
#include <fstream>
#include <string>

class BankAccount
{
private:
	double balance = 0.00;

public:
	std::string name;
	bool overdraft = true;
	std::string record_file_name;

	void makePurchase(std::string item, double cost) {
		double overdraft_fee = 35;
		if (balance >= cost) {
			balance = balance - cost; 
			std::cout << "You purchased " << item << " for $" << cost << ". Your new balance is $" << balance << std::endl;
			saveTransaction(0.00, item, balance, cost);
		}
		else if (overdraft == true) {
			balance = balance - cost - overdraft_fee;
			std::cout << "You purchased " << item << " for $" << cost << ". Your new balance is $" << balance << std::endl;
			saveTransaction(0.00, item, balance, cost);
		}
		else {
			std::cout << "The transaction didn't go through because the cost of the item was greater than your balance of $" << balance << std::endl;
		}
		
	}

	void depositFunds(double deposit_amount) {
		balance = balance + deposit_amount;
		std::cout << "Hello " << name << ", you have deposited $" << deposit_amount << ". Your new balance is $" << balance << std::endl;
		saveTransaction(deposit_amount, "Cash", balance);
	}

	void printBalance() {
		std::cout << "Hello " << name << ", your balance is $" << balance << std::endl;
	}

	void saveTransaction(double deposit = 0.00, std::string item = "Cash", double balance = 0.00, double cost = 0.00) {
		std::fstream myFile;

		myFile.open(record_file_name, std::ios::app); 
			if (myFile.is_open()) {
				myFile << "Deposit: " << deposit << " | Deduction: " << cost << " | Item: " << item << " | Balance: " << balance << "\n";
			}

			myFile.close();

	}

	void printStatement() {
		std::fstream myFile;
		
		myFile.open(record_file_name, std::ios::in);
		if (myFile.is_open()) {
			std::string line;
			while (getline(myFile, line)) {
				std::cout << line << '\n';
			}
		}
		myFile.close();

	}

	void setOverdraft(std::string setting) {
		if (setting == "y") {
			overdraft = true;
		}
		else if (setting == "n") {
			overdraft = false;
		}
		else {
			std::cout << "Unknown input - will set overdraft protections to disabled." << std::endl;
			overdraft = false;
		}
	}
};


int main() {

	std::string overdraft_setting;
	std::string name;

	BankAccount Checking;
	std::cout << "Thank you for opening a bank acount with us!" << std::endl;
	std::cout << "What is your name? " << "\n";
	std::getline(std::cin, name);

	std::cout << "Would you like to enable overdraft privileges? Overdraft fee is 35 USD per transaction. Type y for yes and n for no: " << std::endl;
	std::cin >> overdraft_setting;
	Checking.setOverdraft(overdraft_setting);

	Checking.name = name;
	Checking.record_file_name = "transactions.txt";

	std::string selection;

	do {
		std::cout << "\nHere is the lower case letter you should enter for which action: \n";
		std::cout << "a to Make Purchase | b to Deposit Funds | c to Print Balance | d to Print Statement | q to Quit \n";
		std::cout << "What would you like to do with your account?" << std::endl;
		std::cin >> selection;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (selection == "a") {
			std::string item;
			double cost;
			std::cout << "What is the name of the item you purchased? \n";
			std::getline(std::cin, item);
			std::cout << "What is the cost of the item in USD?" << '\n';
			std::cin >> cost;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Checking.makePurchase(item, cost);
		}
		else if (selection == "b") {
			double deposit;
			std::cout << "How much USD do you want to deposit? " << std::endl;
			std::cin >> deposit;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Checking.depositFunds(deposit);
		}
		else if (selection == "c") {
			Checking.printBalance();
		}
		else if (selection == "d") {
			Checking.printStatement();
		}
		else {
			continue;
		}

	} while (selection != "q");

	return 0;
}