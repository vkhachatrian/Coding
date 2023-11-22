#include <iostream>
using namespace std;

void quickSort(int arr[], int first, int last)
{
	int first1 = first;
	int last1 = last;
	int x = arr[(first + last) / 2];
	int temp;
	do
	{
		while (arr[first1] < x)
			first1++;
		while (arr[last1] > x)
			last1--;

		if (first1 <= last1)
		{
			temp = arr[first1];
			arr[first1] = arr[last1];
			arr[last1] = temp;
			first1++;
			last1++;
		}

	} while (first1 <= last1);

	if (last1 < last)
	{
		quickSort(arr, first, last1);
	}
	if (first1 < last)
	{
		quickSort(arr, first1, last);
	}

}



int main()
{
	int arr[] = { 4,2,3,7,8,9,1,2,3,22,66};
	quickSort(arr, 0, 10);

	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}