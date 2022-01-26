#include <iostream>
using namespace std;


void InsertionSort(int arr[], int size)
{
	int temp;
	int current;
	
	for (int i = 1; i < size; ++i)
	{
		current = arr[i];
		temp = i - 1;
		while(arr[temp] > current)
		{
			arr[temp + 1] = arr[temp];
			temp--;
		}
		arr[temp+1] = current;
	}
}



int main()
{
	int arr[] = { 5,4,7,6,3 };
	InsertionSort(arr, 5);
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}