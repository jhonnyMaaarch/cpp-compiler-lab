#include <iostream>

	int calculateCores(int available_Core, int required_Core);
	int CalculateRemaining(int available_Core, int required_Core);
	void displayJobs(int jobNumber);

int main() {
	
	std::cout << "HPC Node Resource calculator (Version 6)\n";
     
        int runTime = 1;
        while ( runTime ==1){

	int availableCores;
	std::cout << "Enter available cores: ";
	std::cin >> availableCores;
        int remainingCores;
	std::cout << "Enter required cores: ";
        std::cin >> remainingCores;
	int maximumJob = calculateCores(availableCores, remainingCores);
	int coresRemaining = CalculateRemaining(availableCores, remainingCores);
	std::cout << "Maximum remaining core: "; displayJobs(maximumJob);
	std::cout << "Remaining cpu cores: "; displayJobs(coresRemaining);
        std::cout << "Perform another calculation? : (1=yes, 0=No";
	std::cin >> runTime;
        if (runTime == 0) {
	 std::cout << "Exiting HPC Resource Calculator\n";
      }
}
      return 0;
}
int calculateCores(int available_Core, int required_Core){
	if (required_Core > available_Core){
	   std::cout << "Insufficient CPU resources to run this job\n";
	} else if (available_Core <= 0 || required_Core <=0){
	   std::cout << "Error: CPU core value must be greater than 0\n";
	} else{
	return available_Core / required_Core;
        }
        return 0;
}
int CalculateRemaining(int available_Core, int required_Core){
        if (available_Core <= 0 || required_Core <=0){
	   std::cout << "Error: CPU core value must be greater than 0\n";
        } else if (required_Core > available_Core){
	 	std::cout << "Insufficient CPU resources to run this job\n";
	} else{
	return available_Core % required_Core;
	}
        return 0;
}	
void displayJobs(int jobNumbers){
	std::cout << jobNumbers ;
}



