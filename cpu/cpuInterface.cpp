#include "cpuInterface.h"

#include "DE/DifferentialEvolution.h"
#include "DE/TestFunctions.h"
#include <iostream>

namespace cpu {

    void runRastiginOnCPU(int dims, int popSize, int interation) {
        de::Rastrigin cost(dims);

        // Create Differential Evolution optimizer with population size of 50
        de::DifferentialEvolution de(cost, popSize);

        // Optimize for 200 iterations
        de.Optimize(interation, false);
    }

} // namespace cpu