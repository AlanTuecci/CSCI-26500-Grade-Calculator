#ifndef STARTPROMPT_HPP
#define STARTPROMT_HPP

#include <iostream>

bool startPrompt()
{
    char input;
    std::cout << "Welcome to the Grade Calculator for CSCI 26500 by Alan Tuecci!" << std::endl << std::endl;
    std::cout << "This grade calculator only applies for those taking CSCI 26500 in the Spring 2024 semester." << std::endl << std::endl;
    std::cout << "Please have your grades available from Gradescope as you will need to manually input them." << std::endl << std::endl;
    std::cout << "When you're ready, enter '1' to begin: ";
    std::cin >> input;
    std::cout << std::endl;
    while(input != '1')
    {
        std::cout << "You entered something that was not '1' - Please try again: ";
        std::cin >> input;
    }
    return 1;
}

#endif