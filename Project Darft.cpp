#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

class SortingAlgorithm {
public:
    string Name;
    int Comparisons;
    int Swaps;

    SortingAlgorithm(string name) {
        Name = name;
        Comparisons = 0;
        Swaps = 0;
    }
    
   int GetComparisons() {
       
       return Comparisons;
       
   }
    
    int GetSwaps() {
       
       return Swaps;
       
   }
    virtual void Sort(vector<int>& arr) = 0;
};

class SelectionSort : public SortingAlgorithm {
public:
    SelectionSort() : SortingAlgorithm("Selection Sort") {}

    void Sort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
                Comparisons++;
            }
            swap(arr[i], arr[minIdx]);
            Swaps++;
        }
    }
};

class InsertionSort : public SortingAlgorithm {
public:
    InsertionSort() : SortingAlgorithm("Insertion Sort") {}

    void Sort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
                Comparisons++;
                Swaps++;
            }
            arr[j + 1] = key;
        }
    }
};

class MergeSort : public SortingAlgorithm {
public:
    MergeSort() : SortingAlgorithm("Merge Sort") {}

    void Sort(vector<int>& arr) {
        int n = arr.size();
        MergeSortHelper(arr, 0, n - 1);
    }

private:
    void MergeSortHelper(vector<int>& arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            MergeSortHelper(arr, l, m);
            MergeSortHelper(arr, m + 1, r);
            Merge(arr, l, m, r);
        }
    }

    void Merge(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++) {
            L[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++) {
            R[j] = arr[m + 1 + j];
        }

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
                Swaps++;
            }
            Comparisons++;
        }

        while (i < n1) {
            arr[k++] = L[i++];
        }
        while (j < n2) {
            arr[k++] = R[j++];
        }
    }
};

class QuickSort : public SortingAlgorithm {
public:
    enum PivotChoice { First, Random, Median };

    PivotChoice Pivot;

    void Sort(std::vector<int>& arr) override {
        int size = arr.size();
        QuickSortHelper(arr, 0, size - 1);
    }


private:
    void QuickSortHelper(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int pivot_index = ChoosePivot(arr, left, right);
            pivot_index = Partition(arr, left, right, pivot_index);
            QuickSortHelper(arr, left, pivot_index - 1);
            QuickSortHelper(arr, pivot_index + 1, right);
        }
    }

    int ChoosePivot(std::vector<int>& arr, int left, int right) {
        switch (Pivot) {
        case First:
            return left;
        case Random:
            return rand() % (right - left + 1) + left;
        case Median:
            return MedianOfThree(arr, left, right);
        }
    }

    int MedianOfThree(std::vector<int>& arr, int left, int right) {
        int mid = (left + right) / 2;
        if (arr[right] < arr[left]) {
            Swap(arr, left, right);
        }
        if (arr[mid] < arr[left]) {
            Swap(arr, left, mid);
        }
        if (arr[right] < arr[mid]) {
            Swap(arr, mid, right);
        }
        return mid;
    }

    int Partition(std::vector<int>& arr, int left, int right, int pivot_index) {
        int pivot_value = arr[pivot_index];
        Swap(arr, pivot_index, right);
        int store_index = left;
        for (int i = left; i < right; i++) {
            Comparisons++;
            if (arr[i] < pivot_value) {
                Swap(arr, i, store_index);
                store_index++;
            }
        }
        Swap(arr, store_index, right);
        return store_index;
    }

    void Swap(std::vector<int>& arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        Swaps++;
    }
};




class RandomPermutationArrayGenerator {
public:
    static int* GenerateArray(int n) {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        std::shuffle(arr, arr + n, std::mt19937(std::random_device()()));
        return arr;
    }
};

class SortTester {
public:
    static void TestSortingAlgorithm(SortingAlgorithm* algorithm) {
        int sizes[] = {1000, 2000, 3000, 5000, 7000, 10000};
        int num_sizes = sizeof(sizes) / sizeof(int);

        for (int i = 0; i < num_sizes; i++) {
            int n = sizes[i];
            int* arr = RandomPermutationArrayGenerator::GenerateArray(n);

            auto start_time = std::chrono::high_resolution_clock::now();
            algorithm->Sort(arr, n);
            auto end_time = std::chrono::high_resolution_clock::now();

            std::chrono::duration<double, std::milli> elapsed_time = end_time - start_time;
            std::cout << "Size " << n << ": " << algorithm->GetComparisons() << " comparisons, "
                      << algorithm->GetSwaps() << " swaps, " << elapsed_time.count() << " ms elapsed" 
                      << std::endl;

            delete[] arr;
        }
    }
};


int main() {
    const int numTests = 6;
    int testSizes[numTests] = {1000, 2000, 3000, 5000, 7000, 10000};

    // Create instances of sorting algorithms to be tested
    SelectionSort selectionSort;
    InsertionSort insertionSort;
    MergeSort mergeSort;
    QuickSort quickSort;

    // Create instance of array generator
    RandomPermutationArrayGenerator arrayGenerator;

    // Create instance of sort tester
    SortTester sortTester;

    // Test each sorting algorithm with various array sizes
    for (int i = 0; i < numTests; i++) {
        int arraySize = testSizes[i];
        int* array = arrayGenerator.GenerateArray(arraySize);

        std::cout << "Testing selection sort with array size " << arraySize << "..." << std::endl;
        sortTester.TestSortingAlgorithm(selectionSort, array, arraySize);

        std::cout << "Testing insertion sort with array size " << arraySize << "..." << std::endl;
        sortTester.TestSortingAlgorithm(insertionSort, array, arraySize);

        std::cout << "Testing merge sort with array size " << arraySize << "..." << std::endl;
        sortTester.TestSortingAlgorithm(mergeSort, array, arraySize);

        std::cout << "Testing quick sort (first element pivot) with array size " << arraySize << "..." << std::endl;
        quickSort.SetPivotChoice(QuickSort::PivotChoice::FIRST_ELEMENT);
        sortTester.TestSortingAlgorithm(quickSort, array, arraySize);

        std::cout << "Testing quick sort (random element pivot) with array size " << arraySize << "..." << std::endl;
        quickSort.SetPivotChoice(QuickSort::PivotChoice::RANDOM_ELEMENT);
        sortTester.TestSortingAlgorithm(quickSort, array, arraySize);

        std::cout << "Testing quick sort (median-of-three pivot) with array size " << arraySize << "..." << std::endl;
        quickSort.SetPivotChoice(QuickSort::PivotChoice::MEDIAN_OF_THREE);
        sortTester.TestSortingAlgorithm(quickSort, array, arraySize);

        delete[] array;
    }

    return 0;
}
