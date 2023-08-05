//#include <iostream>
//using namespace std;
//
//int main() {
//	int size;
//	cin >> size;
//	int** matrix = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		matrix[i] = new int[size];
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	int minrow = 0; 
//	int maxrow = size;
//	int mincol = 0; 
//	int maxcol = size; 
//
//	//while (minrow < maxrow && mincol < maxcol) {
//
//		for (int i = mincol; i < maxcol; ++i) {
//			cout << matrix[minrow][i] << " ";
//		}
//		minrow++;
//
//		for (int i = minrow; i < maxrow; ++i) {
//			cout << matrix[i][maxcol - 1] << " ";
//		}
//		maxcol--;
//		//if (minrow < maxrow) {
//			for (int i = maxcol - 1; i >= mincol; --i) {
//				cout << matrix[maxrow - 1][i] << " ";
//			}
//			maxrow--;
//		//}
//		//if (mincol < maxcol) {
//			for (int i = maxrow - 1; i >= minrow; --i) {
//				cout << matrix[i][mincol] << " ";
//			}
//			mincol++;
//		//}
//	//}
//
//return 0;
//
//}