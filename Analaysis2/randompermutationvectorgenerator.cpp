#include "RandomPermutationVectorGenerator.h"
#include <random>
#include <algorithm>
#include <vector>
#include <string>

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


// Function to get the entropy of a vector.
double RandomPermutationVectorGenerator::GetEntropy(std::vector<int>& vec) {
    // Get the size of the vector.
    int size = vec.size();
    // Create a vector to store the frequencies of each possible value.
    std::vector<int> frequencies(size, 0);
    // Iterate over the vector and increment the frequency for each value.
    for (int i = 0; i < size; i++) {
        frequencies[vec[i] - 1]++;
    }
    // Calculate the entropy.
    double entropy = 0.0;
    for (int i = 0; i < size; i++) {
        if (frequencies[i] > 0) {
            double p = (double)frequencies[i] / size;
            entropy -= p * std::log2(p);
        }
    }
    return entropy;
}

