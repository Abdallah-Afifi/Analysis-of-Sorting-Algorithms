#include "RandomPermutationVectorGenerator.h"
#include <random>
#include <algorithm>
#include <vector>

std::vector<int> RandomPermutationVectorGenerator::GenerateVector(int size) {
    std::vector<int> vec(size);
    for (int i = 0; i < size; i++) {
        vec[i] = i + 1;
    }
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(vec.begin(), vec.end(), g);
    return vec;
}
