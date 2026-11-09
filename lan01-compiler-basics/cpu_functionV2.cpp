#include <iostream>

int calculateJobs(int available_Cores, int required_Cores) {
    return available_Cores / required_Cores;
}

int calculateRemainingCores(int available_Cores, int required_Cores) {
    return available_Cores % required_Cores;
}

void displayJobs(int jobNumbers) {
     
     std::cout << jobNumbers << "\n";

}
int main() {
    
     int maxConcurrentJobs = calculateJobs(64, 8);
     int remainingCores = calculateRemainingCores(64, 8);
     std::cout << "Maximum concurrent jobs: "; displayJobs(maxConcurrentJobs); 
     std::cout << "Remaining CPU cores: "; displayJobs(remainingCores);



     return 0;

}

