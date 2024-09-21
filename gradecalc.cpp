#include <iostream>
#include <cmath>

int main (){

    int grade;
    
    std::cout << "Hi user! " << std::endl;
    std::cout << "Please enter your grade in %: ";
    std::cin >> grade;

    if (std::cin.fail()) {
        std::cout << "Invalid input! Please enter a numeric value." << std::endl;
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max());
    }

    else if (grade >= 97 && grade <= 100) {
        std::cout << "You got an A+, well done!" << std::endl;
    }
    else if (grade >= 93 && grade <= 96) {
        std::cout << "You got an A, well done!" << std::endl;
    }
    else if (grade >= 90 && grade <= 92) {
        std::cout << "You got an A-, well done!" << std::endl;
    }
    else if (grade >= 87 && grade <= 89) {
        std::cout << "You got a B+, well done!" << std::endl;
    }
    else if (grade >= 83 && grade <= 86) {
        std::cout << "You got a B, well done!" << std::endl;
    }
    else if (grade >= 80 && grade <= 82) {
        std::cout << "You got a B-, well done!" << std::endl;
    }
    else if (grade >= 77 && grade <= 79) {
        std::cout << "You got a C+, good job!" << std::endl;
    }
    else if (grade >= 73 && grade <= 76) {
        std::cout << "You got a C, nice!" << std::endl;
    }
    else if (grade >= 70 && grade <= 72) {
        std::cout << "You got a C-, you can do better." << std::endl;
    }
    else if (grade >= 67 && grade <= 69) {
        std::cout << "You got a D+, you passed." << std::endl;
    }
    else if (grade >= 63 && grade <= 66) {
        std::cout << "You got a D, you passed." << std::endl;
    }
    else if (grade >= 60 && grade <= 62) {
        std::cout << "You got a D-, you barely passed." << std::endl;
    }
    else if (grade < 60) {
        std::cout << "You got an F, better luck next time." << std::endl;
    }

    std::cout << "Press Enter to exit...";
    std::cin.ignore(); 
    std::cin.get(); 


    return 0;
}






