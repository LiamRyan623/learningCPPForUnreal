// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

// Function that doesn't return a value and takes no params
void subtractNumbers1() {};

int subtractNumbers2() {
    return 0;
};

void subtractNumbers3(int a, int b) {};

int subtractNumbers4(int a, int b) {
   
    int subtraction = a - b;

   // std::cout << "The subtraction of a and b is: " << subtraction;

    return subtraction;

}


int main()
{

    float health = 100.f;
    float damage = 2.f;

    float remainingHealth = health - damage;

    int a = 7;
    int b = 10;

    int subtraction = subtractNumbers(25, 13);

    //Printing the result
    std::cout << "The subtraction of a and b is: " << subtraction;

  
        
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

