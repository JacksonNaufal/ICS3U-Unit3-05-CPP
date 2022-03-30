// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a "random number guesser"


#include <iostream>
#include <random>



int main() {
    // this function tells you what month it is4
    int monthNumber;


    // input
    std::cout << "Enter your month number!: ";
    std::cin >> monthNumber;
    // process
    switch (monthNumber) {
        case 1 :
            std::cout << "\nYour month is January!" << std::endl;
            break;
        case 2 :
            std::cout << "\nYour month is February!" << std::endl;
            break;
        case 3 :
            std::cout << "\nYour month is March!" << std::endl;
            break;
        case 4 :
            std::cout << "\nYour month is April!" << std::endl;
            break;
        case 5 :
            std::cout << "\nYour month is May!" << std::endl;
            break;
        case 6 :
            std::cout << "\nYour month is June!" << std::endl;
            break;
        case 7 :
            std::cout << "\nYour month is July!" << std::endl;
            break;
        case 8 :
            std::cout << "\nYour month is August!" << std::endl;
            break;
        case 9 :
            std::cout << "\nYour month is September!" << std::endl;
            break;
        case 10 :
            std::cout << "\nYour month is October!" << std::endl;
            break;
        case 11 :
            std::cout << "\nYour month is November!" << std::endl;
            break;
        case 12 :
            std::cout << "\nYour month is December!" << std::endl;
            break;
        default :
        std::cout << "\nNot a month, enter a number between 1-12"
        << std::endl;
    }

        std::cout << "\nDone" << std::endl;
}
