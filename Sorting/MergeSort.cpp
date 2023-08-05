//#include <iostream>
//using namespace std;
//
//const int maxsize = 12;
//void Merge(int arr[maxsize],int first,int mid, int last)
//{
//	int firstArray1 = first;
//	int lastArray1 = mid;
//	int firstArray2 = mid + 1;
//	int lastArray2 = last;
//	int tempArray[maxsize];
//	int index = firstArray1;
//	while (firstArray1 <= lastArray1 && firstArray2 <= lastArray2)
//	{
//		if (arr[firstArray1] < arr[firstArray2])
//		{
//			tempArray[index] = arr[firstArray1];
//			firstArray1++;
//		}
//		else
//		{
//			tempArray[index] = arr[firstArray2];
//			firstArray2++;
//		}
//		index++;
//	}
//
//	while (firstArray1 <= lastArray1)
//	{
//		tempArray[index] = arr[firstArray1];
//		index++;
//		firstArray1++;
//	}
//
//	while (firstArray2 <= lastArray2)
//	{
//		tempArray[index] = arr[firstArray2];
//		index++;
//		firstArray2++;
//	}
//
//	for (index = first; index <= last; ++index)
//	{
//		arr[index] = tempArray[index];
//	}
//
//
//}
//void MergeSort(int arr[maxsize], int first, int last)
//{
//	if (first < last)
//	{
//		int x = (first + last) / 2;
//		MergeSort(arr, first, x);
//		MergeSort(arr, x + 1, last);
//		Merge(arr, first, x, last);
//	}
//}
//
//array must be sorted
//void FindPairs(int arr[maxsize], int x)
//{
//	int left = 0;
//	int right = maxsize - 1;
//	if (arr[left] > x)
//	{
//		cout << " Don`t have pairs! " << endl;
//		return;
//	}
//	while (left < right)
//	{
//		if ((arr[left] + arr[right]) == x)
//		{
//			cout << " Pairs: " << '(' << arr[left] << ',' << arr[right] << ')';
//			left++;
//			right--;
//		}
//		else if ((arr[left] + arr[right]) < x)
//		{
//			++left;
//		}
//		else
//		{
//			--right;
//		}
//	}
//}
//
//
//unsorted
// with template massive
//
//void FindPairs2(int arr[maxsize], int sum,int first,int last)
//{
//	int first = 0;
//	int last = maxsize - 1;
//	int pivotindex = (first + last) / 2;
//	if (arr[first] > sum)
//	{
//		cout << " Array don't have pairs " << endl;
//		return;
//	}
//	
//
//
//
//	if (first < last)
//	{
//		if ((arr[first] + arr[pivotindex]) > sum)
//		{
//			FindPairs2(arr, sum, first, pivotindex);
//		}
//		else
//		{
//			FindPairs2(arr, sum, pivotindex + 1, last);
//		}
//	}
//
//}
//
//
//
//
//
//
//int main()
//{
//	int arr[maxsize] = { 5,2,3,7,8,9,55,43,12,99,54,1 };
//	MergeSort(arr, 0, 11);
//	FindPairs(arr, 11);
//	1 2 3 5 7 8 9 12 43 54 55 99 
//	for (int i = 0; i < maxsize; ++i)
//	{
//		cout << arr[i] << "  ";
//	}
//
//
//	return 0;
//}