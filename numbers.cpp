// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// This program prints all numbers from 1000 to 2000 skiping a line every 5
// numbers

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // This function prints all numbers from 1000 to 2000 skiping a line
    // every 5 numbers
    int output;

    for (output = 1000; output <= 2000; output ++) {
        if (output % 5 == 0) {
            std::cout << std::endl;
        }
        std::cout << output << " ";
    }

std::cout << "\nDone." << std::endl;
}