#include <iostream>
#include <vector>


int binarySearch(int arr[], int left, int right, int x)
{
	if (left <= right)
	{
		int mid = (left + (right - 1)) / 2;
		if (arr[mid] == x)return mid;

		if (arr[mid] > x) return binarySearch(arr, left, mid - 1, x);

		return binarySearch(arr, mid + 1, right , x);
	}
	return -1;
}



int _bsearch(std::vector<int> numbers, int value)
{
	int sizeOfVector = numbers.size();
	int low = 0; // start
	int high = sizeOfVector - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (value == numbers[mid])
		{
			std::cout << " Value: " << value << " is located at index of " << mid << std::endl;
			return 0;
		}
		else if (value > numbers[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return 1;
}



int main()
{
	int arr[] = { 2,3,4,10,40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? std::cout << " Element is not present in array"
					: std::cout << " Element is present at index " << result;
	return 0;
}