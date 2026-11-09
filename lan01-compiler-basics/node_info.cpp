#include <iostream> // Includes the C++ input/output stream library.
                    // Gives us access to std::cout and std::cerr.

#include <unistd.h> // Includes declarations for POSIX functions.
                    // We use gethostname() and getpid() from here.


// int means this function returns an integer.
// main() is where execution of our C++ program begins.
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

     // Return 0 to indicate successful program completion.
     return 0;
}
