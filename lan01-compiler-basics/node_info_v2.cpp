#include <iostream>
#include <unistd.h>

int main() {

    // char represents a character data type
    // hostname is an array that can hold 256 characters.
    char hostname[256];

    // gethostname() asks the OS for the machine's hostname.
    // sizeof)hostname) gives the size of our array in bytes.
    // != means "not equal to".
    //if the function returns anything other than 0,
    // we treat that as an error.
    if (gethostname(hostname, sizeof(hostname)) != 0) {
        // std::cerr writes an error message
        // << sends data into the output stream.
        // \n represents a newline character.
        std::cerr <<  "Failed to get hostname\n";

        // Return 1 to indicate that the program failed.
        return 1;
     }

     // std::cout writes text to standard output.
     // The text inside double quotes is a string literal.
     std::cout << "C++ Systems Engineering Lab\n";

     // Multiple << operators let us combine output values.
     // hostname contains the machine's hostname.
     std::cout << "Hostname: " << hostname << "\n";

     // getpid() returns the current process ID.
     // We send that number to standard output.
     std::cout << "Process ID: " << getpid() << "\n";

    // sizeof returns the size of an object in bytes.
    // sizeof(hostname) measures the entire character array.
    std ::cout << "Array size: "
               << sizeof(hostname)
               << " bytes\n ";

    // & is the address of operator in this expression.
    // &hostname[0] obtains the address of the first character.
    // static_cast<void*> makes cout display a memory
    // rather than interpreting the pointer as a C-style string.
    std::cout << "Array memory address: " 
              << static_cast<void*>(&hostname[0])
              << "\n";
    // hostname[0] accesses the first element of the array.
    // Its value should be the first character of the hostname.
    std::cout << "First character: "
              << hostname[0]
              << "\n"; 

    // Return 0 to indicate succesful program completion.
    return 0;
}    
