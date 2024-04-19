#ifndef QUIZAVERAGE_HPP
#define QUIZAVERAGE_HPP

#include <iostream>
#include <vector>
#include <algorithm>

double quizAverage(std::vector<float> &quizGrades)
{
    float tempNum = 0;

    if(quizGrades.size() < 10)
    {
        for(short int i = 0; i < quizGrades.size(); i++)
            tempNum = tempNum + quizGrades[i];
    }
    else
    {
        std::sort(quizGrades.begin(), quizGrades.end());
        for(short int i = quizGrades.size()-1; i > quizGrades.size()-11; i--)
        {
            if(quizGrades[i] > -1)
                tempNum += quizGrades[i];
        }
    }
    std::cout << "Your quiz grade average is: " << tempNum << std::endl;

    return tempNum;
}

#endif