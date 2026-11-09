// accept number input
#include <iostream>

int main() {
    
    float firstNum;
    double secNum;
    
    std::cout << "Enter a number (float): ";
    std::cin >> firstNum;
    std::cout << " Enter a number (double): ";
    std::cin >> secNum;
   
   // std::cout << " First number: " << "%.2f\n";
   // std::cout << firstNum << "\n";
   // std::cout << "Second number: " << "%.2f\n";
   // std::cout << secNum << "\n";
    printf("%.2f\n", firstNum);
    printf("%.2f\n", secNum);

    return 0;
    
}
 
