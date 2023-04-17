// Insertion Sort

public override void Sort(int[] array)
    {
        // Loop through each element of the array starting from the second
        for (int i = 1; i < array.Length; i++)
        {
            int key = array[i]; // Store the current element
            int j = i - 1; // Start comparing with the previous element

            // Shift elements greater than the key to the right
            while (j >= 0 && array[j] > key)
            {
                array[j + 1] = array[j];
                j--;
            }

            // Insert the key in its correct position
            array[j + 1] = key;
        }

        // Update the number of comparisons performed during the sort operation
        Comparisons = array.Length - 1;
    }
    
    // Selection Sort

override void Sort(int arr[], int n)
{
    int i, j, min_idx;
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
              min_idx = j;
        }
        // Swap the found minimum element
        // with the first element
        if (min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

// Merge Sort 

void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne
        = 0, // Initial index of first sub-array
        indexOfSubArrayTwo
        = 0; // Initial index of second sub-array
    int indexOfMergedArray
        = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
override void Sort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
 

// Quick Sort (First Element)

int partition(int arr[], int low, int high)
{
 
    // First element as pivot
    int pivot = arr[low];
    int st = low; // st points to the starting of array
    int end = high; // end points to the ending of the array
    int k = high;
    for (int i = high; i > low; i--) {
        if (arr[i] > pivot)
            swap(arr[i], arr[k--]);
    }
    swap(arr[low], arr[k]);
    // As we got pivot element index is end
    // now pivot element is at its sorted position
    // return pivot element index (end)
    return k;
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
override void Sort(int arr[], int low, int high)
{
    // If low is lesser than high
    if (low < high) {
        // idx is index of pivot element which is at its
        // sorted position
        int idx = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, idx - 1);
        quickSort(arr, idx + 1, high);
    }
}

// Quick Sort (Random Element)

int partition(int arr[], int low, int high)
{
    // pivot
    int pivot = arr[high];
   
    // Index of smaller element
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller
        // than or equal to pivot
        if (arr[j] <= pivot) {
 
            // increment index of
            // smaller element
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
 
// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
int partition_r(int arr[], int low, int high)
{
    // Generate a random number in between
    // low .. high
    srand(time(NULL));
    int random = low + rand() % (high - low);
 
    // Swap A[random] with A[high]
    swap(arr[random], arr[high]);
 
    return partition(arr, low, high);
}
 
/* The main function that implements
QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
 
        /* pi is partitioning index,
        arr[p] is now
        at right place */
        int pi = partition_r(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Quick Sort (Median Element)

int partition(int arr[], int low, int high)
{
    int pivot, i, j;
    pivot = arr[high];
    i = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int median(int arr[], int a, int b, int c)
{
    if (arr[a] < arr[b])
    {
        if (arr[b] < arr[c])
            return b;
        else if (arr[a] < arr[c])
            return c;
        else
            return a;
    }
    else
    {
        if (arr[a] < arr[c])
            return a;
        else if (arr[b] < arr[c])
            return c;
        else
            return b;
    }
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = median(arr, low, high, (low + high) / 2);
        swap(arr[pivot_index], arr[high]);
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

//Heap Sort

//Function heapify builds a max binary heap tree from a given array
void heapify(int arr[], int size, int index)
{
    int leftChild = 2*index+1; //left child
    int rightChild = 2*index+2; //right child
    int max = index;   //root
 
    //root takes value of max child node
    //To create a binary min-heap tree, switch the logical operators in the
    // if statement comparison between the child and the max element
    // to the less than operator (<)
    if (leftChild < size && arr[leftChild] > arr[max])
        max = leftChild; 
    if (rightChild < size && arr[rightChild] > arr[max])
        max = rightChild;
    //perform swap if root value has changed
    if (max != index) {
        swap(arr[index], arr[max]);
        heapify(arr, size, max); //recursive heapify call to complete sub-tree with new root 
    }
    
    //Function buildHeap heapifies every level of tree
    //Heapification starts from the lowest level of the tree, working upwards
    void buildHeap(int arr[], int size)
    {
        for (int index = size / 2 - 1; index >= 0; index--)
            heapify(arr, size, index);
    }
    //Main sorting function
    override void Sort (int arr[], int size)
    {
        buildHeap(arr, size);
        for (int index = size-1; index >= 0; i--)
        {
            swap(arr[0], arr[index]);
            heapify(arr, index, 0); //to ensure max/min heap conditions
                                    // remain satisfied after each swap
        }
    }

// Bubble Sort 

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already 
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Counting Sort 

void counting_sort(int arr[], int n, int range)
{
    int count[range+1] = {0};
    int output[n];

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i <= range; i++)
        count[i] += count[i-1];

    for (int i = n-1; i >= 0; i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Tree Sort

struct Node
{
    int key;
    struct Node *left, *right;
};
  
// A utility function to create a new BST Node
struct Node *newNode(int item)
{
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// Stores inorder traversal of the BST
// in arr[]
void storeSorted(Node *root, int arr[], int &i)
{
    if (root != NULL)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}
  
/* A utility function to insert a new
   Node with given key in BST */
Node* insert(Node* node, int key)
{
    /* If the tree is empty, return a new Node */
    if (node == NULL) return newNode(key);
  
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
  
    /* return the (unchanged) Node pointer */
    return node;
}
  
// This function sorts arr[0..n-1] using Tree Sort
void treeSort(int arr[], int n)
{
    struct Node *root = NULL;
  
    // Construct the BST
    root = insert(root, arr[0]);
    for (int i=1; i<n; i++)
        root = insert(root, arr[i]);
  
    // Store inorder traversal of the BST
    // in arr[]
    int i = 0;
    storeSorted(root, arr, i);
}


// Shell Sort 

int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];
  
            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
              
            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}

        
