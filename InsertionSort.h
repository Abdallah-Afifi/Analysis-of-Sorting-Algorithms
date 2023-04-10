#pragma once
#include <iostream>
using namespace std;

//this insertion sort class is to be derived from an abstract sort class.
//the sort function will be virtual in the base class.
//implementation is dynamic to make it easier to make arrays of the 6 different required sizes:
// 1000, 2000, 3000, 5000, 7000, 10000
class InsertionSort {
private:

	int n; //variable for array size
	int *arr;
	
public:
	InsertionSort(int size) {
		n = size;
		arr = new int[size];
	}
	~InsertionSort()
	{
		delete[] arr;
	}
	/*void setValue(int index, int value)
	{
		if (index >= 0 && index < n)
			arr[index] = value;
		else
			cout << "insertion is out of bounds" << endl;
	}
	int getSize()
	{
		return n;
	}*/ //these will be implemented in the base class
	void sort(int Arr[], int n) //insertion sort function
	{

	}
};
