#include <iostream>
int main() {

    int availableCores;
    int requiredCores;
    int remainingCores;
    int concurrentJob;
    
    std::cout << "HPC Node Resource Calculator "
              << "(Version 2) "
              << "\n";
    std::cout << "Enter available CPU cores: ";
    std::cin >> availableCores;
    std::cout << "Enter CPU cores required per job: ";
    std::cin >> requiredCores;
    concurrentJob = availableCores / requiredCores;
    remainingCores = availableCores % requiredCores;
    
    std::cout << "Maximum concurrent jobs: " << concurrentJob << "\n";
    std::cout << "Remaining CPU cores: " << remainingCores << "\n";
    
    return 0;

}

