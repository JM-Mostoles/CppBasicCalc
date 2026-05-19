#include <iostream>

using string = std::string;

double areaCalc(double B, double H);

int main(){

    double base = 0;
    double height = 0;
    bool again = true;
    string answer = "_";


    std::cout << "***TRIANGLE AREA CALC ***" << "\n";  

    do{
        

        std::cout << "Please input a base for the triangle." << "\n";
        std::cin >> base ;

        std::cout << "Please input a base for the triangle." << "\n";
        std::cin >> height ;

        double area = areaCalc(base, height);

        std::cout << "Your area is " << area << "\n";

        std::cout << "Do you wanna do it again? (Yes or no)" << "\n";
        std::cin >> answer;

        if(answer == "Yes" || answer == "yes" || answer == "YES" || answer == "yES")
        {
            again = true;
        }
        else if(answer == "No" || answer == "no" || answer == "NO" || answer == "nO")
        {
            again = false;
        }
        else
        {
            std::cout << "No proper answer was given or was not clearly written. Aborting." << "\n";
            again = false;
        }
    }
    while(again == true);

    return 0;
}

double areaCalc(double B, double H){
    return (B * H) / 2;
}