#ifndef GRADEINPUT_HPP
#define GRADEINPUT_HPP

#include <iostream>
#include <vector>

bool gradeInput(std::vector<float> &quizGrades, float& finalExamGrade)
{
    std::string input = "";
    float tempNum = 0;
    short int numQuizzes = 0;

    std::cout << "Please enter the amount of quizzes that have been graded so far: ";
    std::cin >> input;
    numQuizzes = std::stoi(input);
    std::cout << std::endl;

    for(short int looper = 0; looper < numQuizzes; looper++)
        quizGrades.push_back(-1);

    input = "";
    clearTerminal();

    std::cout << "Please enter your quiz grades exactly as they appear on gradescope [If your grade is '7.0/10.0' then input '7.0']." << std::endl;
    std::cout << "If you do not have a quiz grade, enter 'x'." << std::endl;
    std::cout << "\t| Grade" << std::endl;
    std::cout << "----------------------------" << std::endl;
    for(short int i = 0; i < numQuizzes; i++){
        short int j = i + 1;
        std::cout << "Quiz " << j << "\t| ";
        std::cin >> input;
        if(input != "x"){
            tempNum = std::stof(input);
            quizGrades[i] = tempNum;

            tempNum = 0;
            input = "";
        }
    }

    tempNum = 0;
    input = "";

    std::cout << std::endl;
    std::cout << "Please enter your final exam grade exactly as it appears on gradescope [If your grade is '70.0/100.0' then input '7.0']." << std::endl;
    std::cout << "If you do not have a final exam grade, enter 'x'." << std::endl;
    std::cout << "\t\t| Grade" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Final Exam \t| ";
    std::cin >> input;
    if(input != "x"){
        finalExamGrade = std::stof(input);
    }
    std::cout << std::endl;

    return 1;
}

#endif