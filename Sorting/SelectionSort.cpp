﻿#include <iostream>
using namespace std;

int max_Index(int arr[], int size)
{
	int index = 0;
	for (int i = 1; i < size; ++i)
	{
		if (arr[i] >= arr[index])
		{
			index = i;
		}
	}
	return index;
}

void selectionSort(int arr[], int size)
{
	int maxIndex;
	int temp;
	do
	{
		maxIndex = max_Index(arr, size);
		temp = arr[size - 1];
		arr[size - 1] = arr[maxIndex];
		arr[maxIndex] = temp;
		--size;
	} while (size != 0);

}


int main()
{
	int arr[] = { 5,4,7,9,14,22,33,88,56,33,15 };
	selectionSort(arr, 11);
	for (int i = 0; i < 11; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}