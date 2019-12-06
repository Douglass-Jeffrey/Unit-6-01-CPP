// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.

// Created by: Douglass Jeffrey
// Created on: Dec 2019
// This program gets random numbers then finds the average using an array

#include <iostream>
#include <ctime>


int main() {
    // This function gets random numbers then finds the average using an array

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int sum = 0;
    float average;
    int numberArray[10];

    // Process
    for (int repeater = 0; repeater < 10; repeater++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << "Random Number " << repeater << " is " << randomNumber
                  << std::endl;
        numberArray[repeater] = randomNumber;
        sum = sum + numberArray[repeater];
    }

    average = sum/10.0;

    // Output
    std::cout << "The average of outputted numbers is " << average << std::endl;
}
