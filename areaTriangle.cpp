// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Created on : December 15th, 2022
// This program will get the user's base and height
// of their triangle in main, ensure the user's input is
// valid, then it will pass the base and height to the calc_area function
// as arguments.the calc_area function will calculate the area and display it
// back to the user.
#include <iostream>
#include <string>

// this function will calculate the area of the triangle using
// the base and height of the triangle, which was obtained
// in main and passed to this function.
double CalcArea(double base, double height) {
    // initializing variable of area.
    float area;

    // calculating the area of the triangle given user input.
    area = (base * height) / 2;

    // displays the results of the area calculation back to the user.
    std::cout << "The area of the triangle with base " << base;
    std::cout << " and height " << height << " is " << area << " cm^2.\n";
}

// this function will get the user base and height, and then
// check to make sure the user input is error - free.
int main() {
    // initializing the variables to hold user's base and height.
    std::string userBase, userHeight;
    float userBaseFloat, userHeightFloat;

    // getting the user's base and height.
    std::cout << "Please enter your triangle's base in centimeters: ";
    std::cin >> userBase;
    std::cout << "Please enter your triangle's height in centimeters: ";
    std::cin >> userHeight;

    // try...catch to make sure user input is valid.
    try {
        userBaseFloat = std::stof(userBase);
        if (userBaseFloat >= 0) {
            try {
                userHeightFloat = std::stof(userHeight);
                if (userHeightFloat >= 0) {
                    CalcArea(userBaseFloat, userHeightFloat);
                } else {
                    std::cout << "Please enter a valid, positive integer!";
                }
            } catch (std::invalid_argument) {
            }
        } else {
            std::cout << "Please enter a valid, positive integer!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid integer!";
    }
}
