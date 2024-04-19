#include <iostream>
#include <vector>

#include "./components/clearTerminal.hpp"
#include "./components/startPrompt.hpp"
#include "./components/gradeInput.hpp"
#include "./components/quizAverage.hpp"

int main()
{
    std::vector<float> quizGrades;
    float quizGrade = -1;
    float finalExamGrade = -1;
    float courseGrade = -1;
    std::string input = "";

    clearTerminal();

    if(startPrompt())
        clearTerminal();

    gradeInput(quizGrades, finalExamGrade);

    quizGrade = quizAverage(quizGrades);

    if(finalExamGrade > -1)
    {
        std::cout << "Your final exam grade is: " << finalExamGrade << std::endl; 
        std::cout << std::endl;
        courseGrade = (quizGrade * 0.6) + (finalExamGrade * 0.4); 
        std::cout << "Based on your quiz and final exam grades, your overall score is: " << courseGrade << std::endl;
        if(courseGrade < 70){
            std::cout << "Uh oh, it's not looking good :(" << std::endl;
            std::cout << "Hopefully, the curve will save you." << std::endl;
        }
    }
    else
    {
        // std::cout << std::endl;
        // std::cout << "The minimum grade needed to get a D in a course at Hunter College is 60%." << std::endl;
        // std::cout << "However, in order to get course credit for a CSCI course, you need a C or higher." << std::endl;
        // std::cout << "To get a C, you need at least a score of at least 70%." << std::endl;
        std::cout << std::endl;
        std::cout << "Based on your current quiz grade, you will need to get at least:" << std::endl;
        std::cout << "\tA " << (70 - quizGrade*0.6)/0.4 << "% on the final exam (after the curve) to get a C." << std::endl;
        std::cout << "\tA " << (80 - quizGrade*0.6)/0.4 << "% on the final exam (after the curve) to get a B." << std::endl;
        std::cout << "\tA " << (90 - quizGrade*0.6)/0.4 << "% on the final exam (after the curve) to get a A." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Please keep in mind that all calculations are done assumming that there will be no curve." << std::endl;
    std::cout << "This is because it is impossible to predict what kind of curve will be given." << std::endl;
    std::cout << "Therefore, please use this tool only to estimate how well you are currently doing in the class.";

    std::cout << std::endl << std::endl;
    std::cout << "To terminate the program, enter any character:";
    std::cin >> input;
    return 0;
}