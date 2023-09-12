#include "functions.h"
#include <iostream>
#include <fstream>

using namespace std;

void modValue(int array[], int indexNum, int val) {
    int oldVal = array[indexNum]; // old integer
    array[indexNum] = val;        // user input value
    int newVal = array[indexNum]; // new integer

    cout << "The old value at index " << indexNum << " was: " << oldVal << endl;
    cout << "The new value at index " << indexNum << " is: " << newVal << endl;
}

void addValue(int array[], int arrMaxIndex, int val) {
    array[arrMaxIndex] = val;
}

void printArray(int array[], int maxIndex) {
    for (int i = 0; i < maxIndex; i++) {
        cout << array[i] << " ";
    }
}

void valueZero(int array[], int index) {
    array[index] = 0;
}