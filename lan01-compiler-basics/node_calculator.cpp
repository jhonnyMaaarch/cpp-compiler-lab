#include <iostream>

int main() {
    int AvailCores;
    int ReqCores;
    
    std::cout << "HPC Node Resource Calculator" << "\n";

    std::cout << "Enter available CPU cores: ";
    std::cin >> AvailCores;
    
    std::cout << "Enter CPU cores required per job: ";
    std:: cin >> ReqCores;

    int MaxConJobs = AvailCores / ReqCores;

    std::cout << " Maximum concurrent jobs: " << MaxConJobs << "\n";
    
    return 0;
}

    

