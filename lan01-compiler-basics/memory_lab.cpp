#include <iostream>

int main() {

    int stackNumber = 100;
    // "new int" dynamically allocates memory to an integer.

    int* heapNumber = new int (200); // int* means a pointer for an integer.

    std::cout << " stack value: " << stackNumber << "\n";

    std::cout << "Stack address: " << &stackNumber << "\n"; // obtains the memory address of stack number.

    std::cout << "Heap value: " << *heapNumber << "\n"; // * dereferences the pointer to read the integer value.

    std::cout << "Heap address: " << heapNumber << "\n";

    std::cout << "Pointer variable address: "
              << &heapNumber << "\n";

    //release the dynamically allocated integer

    delete heapNumber;

    return 0;

}


    
