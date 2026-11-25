#include <iostream>

		
int calculateJobs (int available_Cores, int required_Cores);
int CalculateremaininCores (int available_Cores, int required_Cores);
void displayCores(int jobNumbers);

int main() {

		std::cout << " HPC Node Resource Calculator (Version 6) \n";   
                int runtimeCounter = 1;
                while (runtimeCounter ==1) {
                int availableCores;
		std:: cout << "Enter available CPU cores: ";
		std:: cin >> availableCores;
                int requiredCores;
		std:: cout << "Enter required CPU cores per job: ";
		std:: cin >> requiredCores;
		int MaximumConcurrentJob = calculateJobs(availableCores, requiredCores);
		int remainingCores = CalculateremaininCores (availableCores, requiredCores);
		std::cout << "Maximum concurrent job: "; displayCores(MaximumConcurrentJob);
		std::cout << "Remaining CPU cores: "; displayCores(remainingCores);                                     
		std::cout << "Perform another calculation? (1-yes, 0=No): ";
                std::cin >> runtimeCounter;
		if (runtimeCounter == 0) {
			std::cout << "Exiting HPC Resource Calculator\n";
		}
}
		return 0;
           }

int calculateJobs (int available_Cores, int required_Cores) {
	return available_Cores / required_Cores;
}
int CalculateremaininCores (int available_Cores, int required_Cores){
	return available_Cores % required_Cores;
}
void displayCores(int jobNumbers){
	 std::cout << jobNumbers << "\n";
}
