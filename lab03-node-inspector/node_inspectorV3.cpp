#include <iostream>


int main(){
          std::cout << "=================================\n";
          std::cout << "HPC CLUSTER RESOURCE INSPECTOR V2\n";
          std::cout << "==================================\n";
          
          int core[5] = {32, 64, 48, 128, 96};
          int totalCores = 0;
          int maxCore = core[0];
          int minCore = core[0];
          int arrayLength = sizeof(core) / sizeof(core[0]);
          for ( int i = 0; i < arrayLength; i++){
               std::cout << " Compute Node " << i + 1 << ":" << core[i] << " CPU cores\n";
               totalCores += core[i];
               if (core[i] > maxCore){
           
                   maxCore = core[i];
               }
               if (core[i] < minCore){
                   minCore = core[i];
               }
          }
          std :: cout << "-------CLUSTER SUMMARY --------\n";

          //int arrayLength = sizeof(core) / sizeof(core[0]);
          double averageCores = static_cast<double>(totalCores) / arrayLength;
          std::cout << "Total compute nodes: " << arrayLength << "\n";
          std::cout << "Total CPU cores: " << totalCores << "\n";
          std::cout << "Minimum CPU cores: " << minCore << "\n";
          std::cout << "Maximum CPU cores: " << maxCore << "\n";
          std::cout << "Average CPU cores: " << averageCores << "\n";
}      
     
