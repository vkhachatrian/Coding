#include <iostream>
using namespace std;


void BubbleSort(int arr[], int size)
{
	int temp = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}



}




int main()
{
	int arr[] = { 5,7,1,4,9 };
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}