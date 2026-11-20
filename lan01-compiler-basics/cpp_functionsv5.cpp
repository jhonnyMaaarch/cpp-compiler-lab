#include <iostream>

int jobcalculator(int core_available, int core_required);
int remaindercore(int core_available, int core_required);
void jobdisplay(int jobnumber);

int main() {
        


        int runTimes = 1;
        while (runTimes == 1) {

        	std::cout << "HPC Node Resource Calculator (Version 6)\n";
                int coreAvailable;
	        std::cout << "Enter available CPU cores: ";
	        std::cin >> coreAvailable;

                int requiredCore;
	        std::cout << "Enter required CPU cores per job: ";
		std::cin >> requiredCore;

		int maximumJob = jobcalculator (coreAvailable, requiredCore);
		std::cout << "Maximum concurrent jobs: "; jobdisplay(maximumJob);

                int remainderJob = remaindercore (coreAvailable, requiredCore);
		std::cout << "Remaining CPU cores: "; jobdisplay(remainderJob);
		
		std::cout << "Perform another calculation? (1=Yes, 0=No): ";
		std::cin >> runTimes;
		if (runTimes == 0){
			std::cout << "Exiting HPC Resource Calcilator\n";
		}
                }
		return 0;
	}
	 int jobcalculator(int core_available, int core_required){
		if(core_required > core_available){
			std::cout << "Insufficient CPU resources to run this job.\n";
		}
		else if(core_available <=0 || core_required <=0){
			std::cout <<"Error: CPU core value must be greater than 0\n";
		}
		else {
			return core_available / core_required;
		}
		return 0;
	     }
	  int remaindercore(int core_available, int core_required){
		if(core_required > core_available){
			std::cout << "Insufficient CPU resources to run this job.\n";
		}
		else if(core_available <=0 || core_required <=0){
			std::cout << "Error: CPU core value must be greater than 0\n";
		}
		else {
			return core_available % core_required;
		}
		return 0;
             }		
	   void jobdisplay(int jobnumber){
		std::cout << jobnumber << "\n";
	     }
