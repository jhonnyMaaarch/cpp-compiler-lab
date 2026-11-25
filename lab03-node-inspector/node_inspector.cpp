#include <iostream>


int main() {
            

             std::cout << "HPC CLUSTER RESOURCE INSPECTOR V1\n";

             int core[5] = {32, 64, 48, 128, 96};
             int totalCores = 0;
             
             for ( int i = 0; i < 5; i++) {
                  std::cout << "Compute Node " << i + 1 << ":" << core[i] << " CPU cores \n";
                  totalCores += core[i];
             
                  std::cout << "Total compute nodes: " << i+1 << "\n";
                  // alternatively 
                  //int lengthOfarray = sizeof(core) / sizeof(core[0]);
                  //std::cout << "Total compute nodes: " << lengthOfarray << "\n";
                  std::cout << "Total CPU cores: " << totalCores << "\n";
                }
 }



