// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: December 16, 2022
// This program uses an array and generates random numbers
// then calculates the average
#include <iomanip>
#include <iostream>
#include <random>


float AverageOfNumber(int array[], int size) {
    // this functions add up all the numbers in the list
    float avg = 0;

    for (int counter = 0; counter < size; counter++) {
        avg += array[counter];
    }
    avg = avg / size;
    return avg;
}

int main() {
    // declare constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // declare variables
    int arrayOfNumber[MAX_ARRAY_SIZE], randNum;

    // initialize random seed
    std::random_device rseed;
    std::mt19937 rgen(rseed());

    // get numbers
    std::cout << "The numbers are\n";

    // for loop to generate 10 numbers
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        // generate random number
        std::uniform_int_distribution<int> idist(0, 100);
        randNum = idist(rgen);

        // add random number at loop counter position
        arrayOfNumber[loopCounter] = randNum;

        if (randNum < MAX_ARRAY_SIZE) {
            std::cout << randNum << "  added at position "
            << loopCounter << std::endl;
        } else {
            std::cout << randNum << " added at position "
            << loopCounter << std::endl;
        }
    }

    float avg = AverageOfNumber(arrayOfNumber, MAX_ARRAY_SIZE);

    std::cout << "\nThe average of all the numbers is: " << avg;
}
