#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;


int main() {
    ifstream myFile("data.txt"); // opens the file "data.txt" to read
    int array[999];              // array max of 999
    int arrMaxIndex = 100;       // current array has an index of 100
    int count = 0;
    int numbers;

    while (!myFile.eof()) {      // reads the file until end of the line is reached
        myFile >> numbers;
        array[count] = numbers;
        count++;
    }

    int userNum;
    bool found = false;
    while (!found) {
        cout << "Enter an integer to find in the array: ";
        cin >> userNum;
        for (int i = 0; i < 100; i++) {  // checks the array for user integer
            if (userNum == array[i]) {
                cout << "The integer " << userNum << " was found at index " << i << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "The integer " << userNum << " was not found in the array. Please try again." << endl;
        }
    }

    // changes initial integer at certain index with a new integer
    int indexNum;
    int val;
    cout << "\nEnter an index of the integer you would like to modify: ";
    cin >> indexNum;
    cout << "What would you like to change the integer to? ";
    cin >> val;
    modValue(array, indexNum, val);

    // add a value to the end of the array
    int newVal;
    cout << "\nEnter an integer to add to the array: ";
    cin >> newVal;
    addValue(array, arrMaxIndex, newVal);
    arrMaxIndex++;
    cout << "New Array: " << endl;
    printArray(array, arrMaxIndex);

    // changes the integer of the index to 0
    int index2;
    cout << endl;
    cout << "\nEnter the index of a number in which you would like to change to a zero: ";
    cin >> index2;
    valueZero(array, index2);
    cout << "New Array: " << endl;
    printArray(array, arrMaxIndex);
}