#include <iostream>

int main() {

     std::cout << "HPC Node Resource Calculator (Version 3)" << "\n";
     int availableCores;
     int requiredCores;
     int remainingCores;
     int concurrentJob;
     
     std::cout << " Enter available CPU cores: ";
     std::cin >> availableCores;
     std::cout << " Enter required CPU cores per job: ";
     std::cin >> requiredCores;
     if ( requiredCores <= 0 ) {
        std::cout << "Error: Required CPU cores must be greater than zero. " << "\n";
     } else {
        concurrentJob = availableCores / requiredCores;
        remainingCores = availableCores % requiredCores;
        std::cout << "Maximum concurrent job: " 
                  << concurrentJob << "\n"
                  << "Remaining CPU cores: " 
                  << remainingCores << "\n";
     }
      return 0;
}
        
     
