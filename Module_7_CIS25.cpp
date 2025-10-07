#include "Module_7_CIS25.h"
#include <iostream>


using namespace std;



inline void idFinder() {
	int size = 100;
	const int arraySize = size;
	Item* storage = new Item[size];
	string orderedNames[100] = {"aim", "ankle", "apple", "arc", "area", "ark", "arm", "art", "bed", "beer", 
								"butt", "cab", "cat", "can", "call", "city", "cook", "dad", "death", "debt", 
								"doll", "dog", "ear", "eel", "effort", "elder", "elf", "elk", "embers", "entrance", 
								"equality", "equation", "fan", "fat", "fart", "fawn", "fox", "fun", "fur", "gal", 
								"gap", "gas", "generator", "grumble", "gulp", "gum", "gun", "guppy", "gypsy", "hag", 
								"ham", "hat", "head", "heat", "hell", "hem", "hemp", "hen", "hilt", "hit", 
								"ilk", "illness", "imp", "ink", "inkling", "it", "its", "jam", "japan", "jet", 
								"jig", "jim", "jog", "jug", "juice", "jump", "kelp", "kit", "kite", "lab", 
								"lake", "laser", "leg", "length", "lick", "limp", "lit", "lock", "loot", "luck",
								"lump", "mac", "mash", "math", "max", "mead", "mean", "meat", "menu", "min"};

	for (int i = 0; i < size; i++) {
		storage[i].id = i;
		storage[i].name = orderedNames[i];
	}

	int searchID;

	cout << "Please input an ID between 0 and 99: " << endl;
	cin >> searchID;

	int first = 0;
	int last = size;
	while (first <= last) {
		int middle = first + (last - first) / 2;
		if (storage[middle].id == searchID) {
			cout << storage[middle].name << endl;
			break;
		}
		else if (storage[middle].id < searchID) {
			first = middle + 1;
		}
		else {
			last = middle - 1;
		}

	}

	delete[] storage;
}
