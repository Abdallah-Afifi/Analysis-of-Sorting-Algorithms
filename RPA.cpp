#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector<int> generateRPA(int n) {
    // Create a vector containing the first n integers
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }
    
    // Shuffle the vector using the Fisher-Yates shuffle
    for (int i = n-1; i > 0; i--) {
        // Generate a random integer j between 0 and i
        std::random_device rd;
        std::mt19937 g(rd());
        std::uniform_int_distribution<int> dist(0, i);
        int j = dist(g);
        
        // Swap the elements at indices i and j in the vector
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}
int main() {
    // Generate a random permutation array for the first 10 integers
    std::vector<int> rpa = generateRPA(10);
    
    // Print the resulting array
    for (int i = 0; i < rpa.size(); i++) {
        std::cout << rpa[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}





/* The generateRPA() function takes an integer n as input and creates a vector containing the first n integers. 
It then shuffles the vector using the Fisher-Yates shuffle to create a random permutation and returns the resulting RPA. 
The main() function demonstrates how to use the generateRPA() function to generate an RPA for the first 10 integers and print the resulting array.*/
