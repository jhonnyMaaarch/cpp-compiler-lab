#include <iostream>

int calculateJobs(int availableCores, int requiredCores) {


        return availableCores / requiredCores;
}

int main() {

    int concurrentJobs = calculateJobs(48, 6);
    std::cout << "Maximum Concurrent jobs: " << concurrentJobs << "\n";
    
    return 0;
}



