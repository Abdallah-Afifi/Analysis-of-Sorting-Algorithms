#ifndef RANDOM_PERMUTATION_VECTOR_GENERATOR_H
#define RANDOM_PERMUTATION_VECTOR_GENERATOR_H

#include <vector>
#include <string> 
#include <random>
#include <algorithm>

class RandomPermutationVectorGenerator {
public:
    static std::vector<int> GenerateVector(int size);
};


#endif //RANDOM_PERMUTATION_VECTOR_GENERATOR_H
