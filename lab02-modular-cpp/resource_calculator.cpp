#include "resource_calculator.h"
#include <iostream>

int calculateJobs(int availableCore, int requiredCore) {
    return availableCore / requiredCore;
}

int remainingCore(int availableCore, int requiredCore) {
    return availableCore % requiredCore;
}

void displayJobs(int jobNumber){
    std::cout << jobNumber << "\n";
}

