// Module 4 CIS 25 ----------------------------------------------------------------------------------------------------------------------------------------------------
#include "Module 4_CIS25.h"
#include <iostream>
#include <string>

// Part 1 of Module 4 ------------------------------------------------------------------------------------------------------------------------------------------------
// Instructions: Build a simple menu using if statement. 

inline int menu() {

    int choice;

    std::cout << "Welcome to my restaurant! Please select your desired food. Input 1 for ramen, 2 for hamburger, and 3 for burrito: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Here is your ramen! \n";
    }
    else if (choice == 2) {
        std::cout << "Here is your hamburger! \n";
    }
    else if (choice == 3) {
        std::cout << "Here is your burrito! \n";
    }
    else {
        std::cout << "I'm sorry, we don't have that on the menu. \n";
    }

    return 0;
}


// Part 2 of Module 4 -------------------------------------------------------------------------------------------------------------------------------------------------
// Instructions: Debug the following code. Output the highest of three inputs.  Update the code to be nested if statement

inline void largestOfThreeNum() {
    //float n1 n2 n3, // <-- each new instantiated variable should be separated by commas and this line of code should end in a semi colon
    float n1, n2, n3;

    std::cout << "Enter three numbers: ";
    // cin >> n1 > n1 > n3; // <-- there should be >> in between each variable, not just a >
    std::cin >> n1 >> n2 >> n3;
    // if (n1 = n2 && n1 >= n3 // <-- there should be a closing parenthesis at the end of the conditional statement, and the rest of the if statement should be enclosed in {}

    if (n1 >= n2 && n1 >= n3) {
        std::cout << "Largest number: " << n1 << '\n';
    }
    else {
        if (n2 >= n1 && n2 >= n3) {
            std::cout << "Largest number: " << n2 << '\n';
        }
        else {
            std::cout << "Largest number: " << n3 << '\n';
        }
    }
    
}

// breakpoint - where the execution of code will be suspended or paused so we can take a look at what is going on
// hit F9 or click the side bar to set a breakpoint; make sure the breakpoint is set on a line in the code that actually has text.
// make sure to debug in debug mode, not release mode
// step into - if the breakpoint is on a line with the function, selecting step into will go into that function that is called in the breakpoint
// step over - goes into the next line of code int he current function
// step out - takes us out of the current function to whatever calls the current function
// reading memory - hover over variables in debugging to see what is stored in each variable at the breakpoint; can also see the memory address
// yellow arrow in debugging means you have not run that line yet, but if you allow the program to continue, that is the next line that will be run
// Autos - 
// Locals - shows local variables
// Watch - allows us to monitor variables
// Memory view - allows us to look at the entire memory during debugging; type in &variable to get the address of a variable
// debugging mode makes the computer do extra things so it is a bit slower
// one example of an extra thing is setting uninitialized memory to cc, which represents uninitialized stack memory, that way we can identify uninitilized variables easily in memory view
// every two hexadecimal digits is 1 byte of memory