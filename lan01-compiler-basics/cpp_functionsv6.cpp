#include <iostream>

int calculateJobs(int available_Core, int required_Core);
int remainingCore(int available_Core, int required_Core);
void displayJobs(int jobNumber);

int main() {
	
	std::cout << "HPC Node Resource Calculator (Version 6)\n";

	int runTime = 1;

	while (runTime == 1){
		int availableCore;
		std::cout << "Enter available CPU cores: ";
		std::cin >> availableCore;

		int requiredCore;
		std::cout << "Enter required CPU cores per job: ";
		std::cin >> requiredCore;
		if ( availableCore <=0 || requiredCore <=0 ) {
			std::cout << "Error: CPU core value must be greater than 0\n";
		} else if(requiredCore > availableCore){
			std::cout << "Insufficient CPU resources to run this job.\n";
		}else {
			int maximumJob = calculateJobs(availableCore, requiredCore);
			std::cout << "Maximum concurrent jobs: "; displayJobs(maximumJob);
		
			int remaining_Cores = remainingCore(availableCore, requiredCore);
			std::cout << "Remaining CPU cores: "; displayJobs(remaining_Cores);
		}
                std::cout << "Perform another calculation? (1=Yes, 0=No): ";
		std::cin >> runTime;
		
		if(runTime == 0){
			std::cout << "Exiting HPC Resource Calculator\n";
		}
		}
		return 0;
}

	int calculateJobs(int available_Core, int required_Core){
		return available_Core / required_Core;
        }

	int remainingCore(int available_Core, int required_Core){
		return available_Core % required_Core;
        }
	void displayJobs(int jobNumber){
		std::cout << jobNumber << "\n";
         }
	
