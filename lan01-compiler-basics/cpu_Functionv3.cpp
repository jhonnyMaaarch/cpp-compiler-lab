#include <iostream>

int calculateJobs(int availableCores, int requiredCores);
int calculateRemainingCores(int availableCores, int requiredCores);
void displayCores(int jobNumbers);

int main() {

	int maximumCores = calculateJobs(50, 8);
	int remainingCores = calculateRemainingCores(50, 8);
        std::cout << "Maximum concurrent jobs: "; displayCores(maximumCores);
	std::cout << "Remaining CPU cores: "; displayCores(remainingCores);

	return 0;

}

int calculateJobs(int availableCores, int requiredCores){

	return availableCores / requiredCores;
}

int calculateRemainingCores(int availableCores, int requiredCores){

	return availableCores % requiredCores;
}

void displayCores(int jobNumbers) {

     std::cout << jobNumbers << "\n";
}
