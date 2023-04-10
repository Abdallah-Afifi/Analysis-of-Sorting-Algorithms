#pragma once
#include <iostream>
using namespace std;

class AbstractSort {
	int size;
	int* arr;
public:
	AbstractSort(int n)
	{
		size = n;
		arr = new int[n];
	}
	~AbstractSort()
	{
	 delete[] arr;
	}
	int getValue(int index)
	{
		return arr[index];
	}
	int getSize()
	{
		return size;
	}
	void SetValue(int value, int index)
	{
		arr[index] = value;
	}
	void PrintArray()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	int virtual sort() = 0;
};

