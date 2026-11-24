# hpc_calculator is the executable we want to generate
# main.o and resource_calculator.o are the intermediary target files we want to build
# main.o object file links with resource_calculator.o to produce hpc_calculator executable
# we have to generate an object file (main.o) from compiling main.cpp
# we have to generate an object file (resource_calculator.o)from resource_calculator.cpp
# We have to compile both main.cpp and resource_calculator.cpp seperately into object files.
# main.cpp and resource_calculator.cpp are the prerequisities needed to build our target files.
# resource_calculator.h is the header file
# compile main.cpp into an object file without liniking
# The target file is hpc_calculator built from linking main.o and resource_calculator.o
hpc_calculator: main.o resource_calculator.o
	g++ main.o resource_calculator.o -o hpc_calulator

# The internediate target is main.o built from main.cpp
main.o: main.cpp resource_calculator.h
	g++ -std=c++17 -Wall -Wextra -g -c main.cpp -o main.o

# The intermediate target is resource_calculator.o built from resource_calculator.cpp 
resource_calculator.o: resource_calculator.cpp resource_calculator.h
	g++ -std=c++17 -Wall -Wextra -g -c resource_calculator.cpp -o resource_calculator.o





