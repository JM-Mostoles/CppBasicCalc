#include <iostream>
#include <cmath>

using n = double;

namespace Calc
{   
    int opr;
    n n1;
    n n2;
    n ans; 
}

int main(){

    std::cout << "Welcome to the CALCULATOR terminal program \n" << std::endl;
    std::cout << "Please select your operation type \n" << std::endl;
    std::cout << " Press 1 for sum (+)\n Press 2 for sub (-)\n Press 3 for multiplication (*)\n Press 4 for division (/)" << std::endl;

    std::cin >> Calc::opr;

    switch(Calc::opr){

        default: std::cout << "Please enter a number from 1 to 4." << std::endl; return 0; break;

        case 1: std::cout << "Which 2 numbers are we going to sum?"      << std::endl; break;
        case 2: std::cout << "Which 2 numbers are we going to sub?"      << std::endl; break;
        case 3: std::cout << "Which 2 numbers are we going to multiply?" << std::endl; break;
        case 4: std::cout << "Which 2 numbers are we going to divide?"   << std::endl; break;
    }

    std::cout << "Please type the first one" << std::endl;
    std::cin >> Calc::n1;

    std::cout << "Please type the second one" << std::endl;
    std::cin >> Calc::n2;

    if(Calc::opr == 1){
        std::cout << "Your sum is " << Calc::n1 + Calc::n2 <<std::endl;
    }

    else if(Calc::opr == 2){
        std::cout << "Your sub is " << Calc::n1 - Calc::n2 <<std::endl;
    }

    else if(Calc::opr == 3){
        std::cout << "Your multiplication is " << Calc::n1 * Calc::n2 <<std::endl;
    }

    else{
        std::cout << "Your division is " << Calc::n1 / Calc::n2 <<std::endl;
    }

    

    return 0;
}