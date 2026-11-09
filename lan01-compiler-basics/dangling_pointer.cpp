
#include <iostream>  // Provides standard output functionality.

int main() {  // Program entry point.

    // Dynamically allocate an integer initialized to 200.
    // Store its address in a pointer variable.
    int* heapNumber = new int(200);

    // Print the integer value by dereferencing the pointer.
    std::cout << "Value before delete: "
              << *heapNumber << "\n";

    // Release the dynamically allocated integer.
    delete heapNumber;

    // Assign nullptr to indicate that the pointer
    // no longer refers to an allocated integer.
    heapNumber = nullptr;

    // Check whether the pointer is null.
    // == compares two values for equality.
    if (heapNumber == nullptr) {

        // Display a message when the condition is true.
        std::cout << "Pointer is now nullptr\n";
    }

    // Return success to the operating system.
    return 0;
}

