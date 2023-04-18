#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <string>

using namespace std;

class SortingAlgorithm {

public: 

    SortingAlgorithm(string name) {
        Name = name;
        Comparisons = 0;
        Swaps = 0;
    }

    virtual void Sort(vector<int>& arr) = 0; 
    
    int GetComparisons() {
        return Comparisons;
    }
    
    int GetSwaps() {
        return Swaps;
    }
    
    string GetName() {
        return Name;
    }
protected:
    string Name;
    int Comparisons;
    int Swaps;
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

class QuickSortFirstPivot : public SortingAlgorithm {
public:
    QuickSortFirstPivot() : SortingAlgorithm("Quick Sort - First Pivot") {}

    void Sort(std::vector<int>& arr) {
        int size = arr.size();
        QuickSortHelper(arr, 0, size - 1);
    }

private:
    void QuickSortHelper(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int pivot_index = left;
            pivot_index = Partition(arr, left, right, pivot_index);
            QuickSortHelper(arr, left, pivot_index - 1);
            QuickSortHelper(arr, pivot_index + 1, right);
        }
    }

    int Partition(std::vector<int>& arr, int left, int right, int pivot_index) {
        int pivot_value = arr[pivot_index];
        swap(arr[pivot_index], arr[right]);
        Swaps++;
        int store_index = left;
        for (int i = left; i < right; i++) {
            Comparisons++;
            if (arr[i] < pivot_value) {
                swap(arr[i], arr[store_index]);
                Swaps++;
                store_index++;
            }
        }
        swap(arr[store_index], arr[right]);
        Swaps++;
        return store_index;
    }
};

class QuickSortRandomPivot : public SortingAlgorithm {
public:
    QuickSortRandomPivot() : SortingAlgorithm("Quick Sort - Random Pivot") {}

    void Sort(std::vector<int>& arr) {
        int size = arr.size();
        QuickSortHelper(arr, 0, size - 1);
    }

private:
    void QuickSortHelper(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int pivot_index = rand() % (right - left + 1) + left;
            pivot_index = Partition(arr, left, right, pivot_index);
            QuickSortHelper(arr, left, pivot_index - 1);
            QuickSortHelper(arr, pivot_index + 1, right);
        }
    }

    int Partition(std::vector<int>& arr, int left, int right, int pivot_index) {
        int pivot_value = arr[pivot_index];
        swap(arr[pivot_index], arr[right]);
        Swaps++;
        int store_index = left;
        for (int i = left; i < right; i++) {
            Comparisons++;
            if (arr[i] < pivot_value) {
                swap(arr[i], arr[store_index]);
                Swaps++;
                store_index++;
            }
        }
        swap(arr[store_index], arr[right]);
        Swaps++;
        return store_index;
    }
};

class QuickSortMedianPivot : public SortingAlgorithm {
public:
    QuickSortMedianPivot() : SortingAlgorithm("Quick Sort - Median Pivot") {}

    void Sort(std::vector<int>& arr) {
        int size = arr.size();
        QuickSortHelper(arr, 0, size - 1);
    }

private:
    void QuickSortHelper(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            int pivot_index = MedianOfThree(arr, left, right);
            pivot_index = Partition(arr, left, right, pivot_index);
            QuickSortHelper(arr, left, pivot_index - 1);
            QuickSortHelper(arr, pivot_index + 1, right);
        }
    }

    int MedianOfThree(std::vector<int>& arr, int left, int right) {
        int mid = (left + right) / 2;
        if (arr[right] < arr[left]) {
            swap(arr[left], arr[right]);
        }
        if (arr[mid] < arr[left]) {
            swap(arr[left], arr[mid]);
        }
        if (arr[right] < arr[mid]) {
            swap(arr[mid], arr[right]);
        }
        return mid;
    }

    int Partition(std::vector<int>& arr, int left, int right, int pivot_index) {
        int pivot_value = arr[pivot_index];
        swap(arr[pivot_index], arr[right]);
        Swaps++;
        int store_index = left;
        for (int i = left; i < right; i++) {
            Comparisons++;
            if (arr[i] < pivot_value) {
                swap(arr[i], arr[store_index]);
                Swaps++;
                store_index++;
            }
        }
        swap(arr[store_index], arr[right]);
        Swaps++;
        return store_index;
    }
};



class BubbleSort : public SortingAlgorithm {
public:
  
  BubbleSort() : SortingAlgorithm("Bubble Sort") {}

  
    void Sort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                Comparisons++;
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                    Swaps++;
                }
            }
        }
    }
    };
    
    class CountingSort : public SortingAlgorithm {
public:
  CountingSort() : SortingAlgorithm("Counting Sort") {}

  void Sort(std::vector<int>& arr) {
    int n = arr.size();

    // Find the range of input elements
    int k = *max_element(arr.begin(), arr.end());

    // Create a count array to store count of individual elements
    std::vector<int> count(k + 1, 0);

    // Store count of each element
    for (int i = 0; i < n; i++) {
      count[arr[i]]++;
      Comparisons++;
    }

    // Change count[i] so that count[i] now contains actual position of this element in output array
    for (int i = 1; i <= k; i++) {
      count[i] += count[i - 1];
      Comparisons++;
    }

    // Build the output array
    std::vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
      output[count[arr[i]] - 1] = arr[i];
      count[arr[i]]--;
      Swaps++;
    }

    // Copy the output array to the input array
    for (int i = 0; i < n; i++) {
      arr[i] = output[i];
      Swaps++;
    }
  }
};


class HeapSort : public SortingAlgorithm {
public:

HeapSort() : SortingAlgorithm("Heap Sort") {}

    void Sort(std::vector<int>& arr) {
        int n = arr.size();
        BuildMaxHeap(arr, n);
        for (int i = n - 1; i >= 1; i--) {
            swap(arr[0], arr[i]);
            Swaps++;
            Heapify(arr, 0, i);
        }
    }


private:
    void BuildMaxHeap(std::vector<int>& arr, int n) {
        for (int i = n / 2 - 1; i >= 0; i--) {
            Heapify(arr, i, n);
        }
    }

    void Heapify(std::vector<int>& arr, int i, int n) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        Comparisons++;
        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }

        Comparisons++;
        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr[i], arr[largest]);
            Swaps++;
            Heapify(arr, largest, n);
        }
    }
    };
    
    
class ShellSort : public SortingAlgorithm {
public:
    ShellSort() : SortingAlgorithm("Shell Sort") {}

    void Sort(vector<int>& arr) {
        int n = arr.size();
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                    arr[j] = arr[j - gap];
                    Comparisons++;
                    Swaps++;
                }
                arr[j] = temp;
                Swaps++;
            }
        }
    }
};

class TreeSort : public SortingAlgorithm {
public:
    TreeSort() : SortingAlgorithm("Tree Sort") {}

    void Sort(vector<int>& arr) {
        Node* root = nullptr;
        for (int num : arr) {
            root = Insert(root, num);
        }
        arr.clear(); // clear the input vector before adding the sorted values
        TraverseInOrder(root, arr);
    }

private:
    struct Node {
        int val;
        Node* left;
        Node* right;

        Node(int v) : val(v), left(nullptr), right(nullptr) {}
    };

    Node* Insert(Node* root, int num) {
        if (!root) {
            return new Node(num);
        }

        Comparisons++;
        Swaps++;
        if (num < root->val) {
            root->left = Insert(root->left, num);
        } else {
            root->right = Insert(root->right, num);
        }

        return root;
    }

    void TraverseInOrder(Node* root, vector<int>& arr) {
        if (!root) {
            return;
        }
        TraverseInOrder(root->left, arr);
        if (!arr.empty() && arr.back() > root->val) {
            swap(arr.back(), root->val);
            Swaps++;
        }
        arr.push_back(root->val);
        TraverseInOrder(root->right, arr);
        Comparisons++;
    }
};





class RandomPermutationVectorGenerator {
public:
    static vector<int> GenerateVector(int n) {
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            vec[i] = i + 1;
        }
        random_device rd;
        mt19937 g(rd());
        shuffle(vec.begin(), vec.end(), g);
        return vec;
    }
};

class SortTester {
public:
    static void TestSortingAlgorithm(SortingAlgorithm* algorithm, vector<int>& arr, int n) {
        auto start_time = chrono::high_resolution_clock::now();
        algorithm->Sort(arr);
        auto end_time = chrono::high_resolution_clock::now();

        chrono::duration<double, milli> elapsed_time = end_time - start_time;
        cout << algorithm->GetName();
        
        //checking if the vector is sorted before printing
        if (is_sorted(arr.begin(), arr.end())) {
            cout << " (sorted)";
        } else {
            cout << " (not sorted)";
        }

        cout << " with size " << n << ": " 
             << algorithm->GetComparisons() << " comparisons, "
             << algorithm->GetSwaps() << " swaps, " 
             << elapsed_time.count() << " ms elapsed" 
             << endl;
    }
};



int main() {
    const int numTests = 10;
    int testSizes[numTests] = {1000, 2000, 3000, 5000, 7000, 10000, 13000, 16000, 20000, 24000};

    // Create instances of sorting algorithms to be tested
    vector<SortingAlgorithm*> sortingAlgorithms;
    sortingAlgorithms.push_back(new SelectionSort());
    sortingAlgorithms.push_back(new InsertionSort());
    sortingAlgorithms.push_back(new MergeSort());
    sortingAlgorithms.push_back(new QuickSortFirstPivot());
    sortingAlgorithms.push_back(new QuickSortRandomPivot());
    sortingAlgorithms.push_back(new QuickSortMedianPivot());
    sortingAlgorithms.push_back(new BubbleSort());
    sortingAlgorithms.push_back(new CountingSort());
    sortingAlgorithms.push_back(new HeapSort());
    sortingAlgorithms.push_back(new TreeSort());
    sortingAlgorithms.push_back(new ShellSort()); 
    
    // Create instance of array generator
    RandomPermutationVectorGenerator vecGenerator;
    
    // Create instance of sort tester
    SortTester sortTester;

    // Test each sorting algorithm with various array sizes
    for (int i = 0; i < numTests; i++) {
        int vectorSize = testSizes[i];
        vector<vector<int>> vectors;

        // Generate a new vector for each sorting algorithm
        for (int j = 0; j < sortingAlgorithms.size(); j++) {
            vectors.push_back(vecGenerator.GenerateVector(vectorSize));
        }

        cout << endl << "Testing with array size " << vectorSize << ":" << endl;

        // Test each sorting algorithm with its own generated vector
        for (int j = 0; j < sortingAlgorithms.size(); j++) {
            sortTester.TestSortingAlgorithm(sortingAlgorithms[j], vectors[j], vectorSize);
        }
    }

    // Free allocated memory
    for (int i = 0; i < sortingAlgorithms.size(); i++) {
        delete sortingAlgorithms[i];
    }

    return 0;
}


