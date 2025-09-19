// Instructions: Create a program:
// That creates a menu with at least three options.
// Each menu option should call a function that does something.
// Include header files.
#include <iostream>;
#include "Module_5_CIS25.h";

using namespace std;

inline void newOutfit();
inline void lunchtime(int servings);
inline void furniture();

inline void storeMenu() {
	int option;

	do {
		cout << "Please select one of these options ~ 0 to quit, 1 for the clothing section, 2 for the food section, and 3 for the furniture section: ";
		cin >> option;
		if (option == 1) {
			newOutfit();
		}
		else if(option == 2){
			int helpings;
			cout << "Please let me know how many helpings of food you'd like! " << endl;
			cin >> helpings;
			lunchtime(helpings);
		}
		else if (option == 3) {
			furniture();
			}

	} while (option != 0);

}

inline void newOutfit() {
	cout << "Welcome, please browse to get your new outfit!" << endl;
}

inline void lunchtime(int servings) {

	cout << "Welcome, please help yourself to a nice lunch!" << endl;

	for (int i = servings; 0 < i ; i--) {
		cout << "Here is a serving of fried rice!" << endl;
	}

}

inline void furniture() {
	cout << "Please come select some furniture for your home!" << endl;
}