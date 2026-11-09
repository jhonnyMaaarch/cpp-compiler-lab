// Calculate the area and perimeter of a rectangle
#include <iostream>

int main() {
    int length;
    int width;
    int perimeter;
        
    std::cout << "Calculate the perimeter of a rectangle " << "\n";
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the width: ";
    std::cin >> width;
    perimeter = length * width;
    
    std::cout << "The perimeter of the rectangle is: " << perimeter << "\n";
    
    return 0;

}

    
