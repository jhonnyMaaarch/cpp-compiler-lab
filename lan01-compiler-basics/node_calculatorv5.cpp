#include <iostream>

int main() {

	std::cout << " HPC Node Resource Calculator (Version 5)\n";

        int runtimeCounter = 1;
        
        while (runtimeCounter == 1) {
        
        int availableCores;
        std::cout << "Enter available CPU cores: ";
        std::cin >> availableCores;
        int requiredCores;
        std::cout << "Enter required CPU cores per job: ";
        std::cin >> requiredCores;
        
	if ( availableCores <=0 || requiredCores <= 0 ) {
	std::cout << "Error: CPU core value must be greater than 0\n ";
        } else if ( requiredCores > availableCores) {
	std::cout << "Insufficient CPU resources to run this job.\n";
        }else{
		int concurrentJob = availableCores / requiredCores;
                int remainingCores = availableCores % requiredCores;
		std::cout << "Maximum concurrent jobs: "
			  << concurrentJob 
                          << "\n"
                          << "Remaining CPU cores: " << remainingCores 
                          << "\n";
        }
        std::cout << "Perform another calculation? " << "(1-Yes, 0=No): ";
        std::cin >> runtimeCounter;
        if (runtimeCounter == 0){
	    std::cout << "Exiting HPC Resource Calculator\n";
        }
}
        return 0;
}

