#ifndef RESOURCE_CALCULATOR_H // Check whether this header guard macro is undefined.
#define RESOURCE_CALCULATOR_H // Define the macro to prevent repeated inclusion.

int calculateJobs(int availableCore, int requiredCore); // Declare the job-count function.

int remainingCore(int availableCore, int requiredCore); // Declare the remaining-core function.

void displayJobs(int jobNumber); // Declare the output function.

#endif // End the conditional compilation block.
