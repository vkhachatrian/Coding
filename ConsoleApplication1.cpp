//#include <iostream>
//using namespace std;
//
//const int maxsize = 4;
//int max_elem(int arr[maxsize])
//{
//	int max = arr[0];
//	for (int i = 1; i < maxsize; ++i)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//
//
//
//
//
//int main()
//{
//	int k = 0;
//	int arr1[maxsize];
//	cout << " Input elements of array " << endl;
//
//
//	for (int i = 0; i < maxsize; ++i)
//	{
//		cin >> arr1[i];
//	}
//
//
//	int maxsize2 = max_elem(arr1);
//	int* arr2 = new int[maxsize2 + 1] {};
//	
//	cout << " Input the sum of pairs: " << endl;
//	cin >> k;
//
//	if (k - maxsize2 > maxsize2)
//	{
//		cout << " No pairs! " << endl;
//		return -1;
//	}
//
//
//	int temp = 0;
//	int val = 0;
//	for (int i = 0; i < maxsize; ++i)
//	{
//		val = k - arr1[i];
//		temp = arr1[i];
//		if (arr2[val] == 0)
//		{
//			arr2[temp] = 1;
//		}
//		else if(arr2[temp] != -1 && val > 0)
//		{
//			cout << " Pairs: " << '(' << temp << ',' << val << ')' << endl;
//			arr2[temp] = -1;
//		}
//	}
//
//	delete [] arr2;
//
//
//
//	return 0;
//}
//
