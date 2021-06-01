// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program will display the month of the year that represents that number

#include <iostream>

int main() {
    // this function displays the month of the year that represents that number

    // input
    int month;

    std::cout << "Enter the number of a month: ";
    std::cin  >> month;

    // process & output
switch (month) {
        case 1 :
            std::cout << "It is January." << std::endl;
            break;
        case 2 :
            std::cout << "It is February." << std::endl;
            break;
        case 3 :
            std::cout << "It is March." << std::endl;
            break;
        case 4 :
            std::cout << "It is April." << std::endl;
            break;
        case 5 :
            std::cout << "It is May." << std::endl;
            break;
        case 6 :
            std::cout << "It is June." << std::endl;
            break;
        case 7 :
            std::cout << "It is July." << std::endl;
            break;
        case 8 :
            std::cout << "It is August." << std::endl;
            break;
        case 9 :
            std::cout << "It is September." << std::endl;
            break;
        case 10 :
            std::cout << "It is October." << std::endl;
            break;
        case 11 :
            std::cout << "It is November." << std::endl;
            break;
        case 12 :
            std::cout << "It is December." << std::endl;
            break;
        default :
            std::cout << "Invalid month!" << std::endl;
    }
std::cout << std::endl;
std::cout << "Done." << std::endl;
}
