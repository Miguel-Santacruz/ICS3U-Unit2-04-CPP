// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program calculates circumference cost of a pizza with
//    diameter inputted by user

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of pizza
    const float Rent = 1;
    const float Labor = 0.75;
    const float Cost_per_inch = 0.5;
    const float HST = 0.13;

    float diameter;
    float subTotal;
    float total;

    // Input
    std::cout << "Enter diamter of the pizza you would like (inches): ";
    std::cin >> diameter;

    // Process
    subTotal = Rent + Labor + (diameter * Cost_per_inch);
    total = subTotal * (1 + HST);

    // Output
    std::cout << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is $"
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
