#include <iostream>

int main(){

    std::cout << "HPC Node Resource Calculator (Version 4)\n";
    
    std::cout << "Enter available CPU cores: ";
    int availableCores;
    std::cin >> availableCores;
    std::cout << "Enter required CPU cores per job: ";
    int requiredCores;
    std::cin >> requiredCores;

    if ( availableCores <=0 || requiredCores <=0) {
	std::cout << "Error: CPU core values must be greater than zero\n";
    }else if ( requiredCores > availableCores ) {

	std::cout << " Insufficient CPU resources to run this job.\n";
    }else {
	int concurrentJob = availableCores / requiredCores;
        int remainingJob = availableCores % requiredCores;
        std::cout << "Maximum concurrent jobs: " 
		  << concurrentJob 
                  << "\n"
                  << "Remaining CPU cores: " 
                  << remainingJob
                  << "\n";
    }
    return 0;
}
      
      

