
//421(done)
/*#include <iostream>
using namespace std;

int main() {
	int m = 0;	
	int count = 0;
	cout << " Enter the (mxm)Matrix " << endl;
	cout << " M = ";
	cin >> m;
	int** matrix = new int*[m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[m];
	}
	cout << " Enter the numbers of matrix " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	int k;
	cout << " Enter k\n k = ";
	cin >> k;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++) {
			if ((i > j)&& (matrix[i][j] % k == 0)) {
				count++;
			}
			cout << " ";
		}
		cout << endl;
	}
	cout << " Qanak@ = " << count;

	return 0;
}
*/



//425(done)

/*#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int count = 0;
	cout << " Enter the (mxm)Matrix\nm = ";
	cin >> m;
	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[m];
	}

	cout << " Enter the matrix " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if ((i > j) && (matrix[i][j] % 2 == 0)) {
				count++;
			}
		}
	}
	cout << " Qanak@ = " << count;

	return 0;
}
*/


//429(done)
/*#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int count = 0;
	cout << " Enter the size of matrix\nm = ";
	cin >> m;
	int** matrix = new int*[m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[m];
	}
	cout << " Enter the matrix " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if ((i < j || i == j) && matrix[i][j] % 5 == 2 && matrix[i][j]>5) {
				count++;		
			}		
		}
	}
	cout << " Qanak@ = " << count;
	return 0;
} */

//471(done)
/*#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << " Enter the size of matrix ";
	cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the numbers of matrix " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	int min = matrix[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j || i == j){
				if (min > matrix[i][j]) {
					min = matrix[i][j];
				}								
				}
			}
		}
	cout << " Minimum value = " << min;
	return 0;
}*/


//475 (done)
/*
#include <iostream>
using namespace std;

int main() {
	int n = 0;	
	int max = 0;
	int sum = 0;
	int imax = 0;
	int jmax = 0;
	cout << " Greq matrix i chaps@\n N = ";
	cin >> n;
	int** matrix = new int* [n];
	cout << " Nermuceq matrix@ " << endl;
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	max = matrix[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				if (max < matrix[i][j]) {
					max = matrix[i][j];
					imax = i;
					jmax = j;
				}
			}
		}
		cout << endl;
	}
	sum += imax * imax + jmax * jmax;
		cout << " Max = " << max << "\n" << " Indexneri qarakusiner@ gumary = " <<  sum;
	return 0;
} */

//479 (done)

/*#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cout << " N = ";
	cin >> n;
	int** matrix = new int*[n];
	cout << " Nermuceq matrix@ " << endl;
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	int min = matrix[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				if (min > matrix[i][j]) {
					min = matrix[i][j];
				}
			}
		}
	}
	cout << " Min = " << min;
	return 0;
} */

//483(done)
/*#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int count = 0;
	int sum = 0;
	cout << " N = ";
	cin >> n;
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j == n - 1) && matrix[i][j]) {
				count++;
				sum += matrix[i][j];
			}
		}
	}
	cout << " Mij tvabanakan@ = " << (double)sum / count;
	while

	return 0;
}*/


//487(done)

//
//#include <iostream>
//using namespace std;
//
//bool issymetricalMatrix(int** matrix, int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (matrix[j][i] == matrix[i][j]) {
//				return true;
//			}
//			else return false;
//		}
//	}
//
//}
//
//int main() {
//
//	int n = 0;
//	cout << " N = ";
//	cin >> n;
//	int** matrix = new int* [n];
//	int sum = 0;
//
//	for (int i = 0; i < n; i++) {
//		matrix[i] = new int[n];
//		for (int j = 0; j < n; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (issymetricalMatrix(matrix, n)) {
//				if (matrix[i][j] > 0) {
//					sum += matrix[i][j];
//				}
//				else cout << " No! ";
//				return -1;
//			}
//			
//			
//		}
//	}
//	cout << " Sum = " << sum;
//
//
//	return 0;
//}


//491(done)
/*
#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int n = 0;
	int max = 0;
	int maxi = 0;
	int maxj = 0;
	cout << " M = ";
	cin >> m;
	cout << " N = ";
	cin >> n;



	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	


	max = matrix[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0;j < n; j++) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
				maxi = i;
				maxj = j;								
			}	
		}
	}

	// matrixi maximum arjeqi toxi texapoxum
	for (int i = 0, temp = 0; i < n; i++)
	{
		 temp = matrix[0][i];
		matrix[0][i] = matrix[maxi][i];
		matrix[maxi][i] = temp;
	}



	// matrixi maximum arjeqi syuni texapoxum
	for (int i = 0, temp = 0; i < m; i++)
	{
		temp = matrix[i][0];
		matrix[i][0] = matrix[i][maxj];
		matrix[i][maxj] = temp;
	}

	// matrixi artacum
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} */



//495(TODO)
/*
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Nermuceq matrici toxeri qanak@ " << endl;
	cin >> n;
	cout << " Syuneri qanak@ = 2*" << n << "=" << 2*n << endl;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[2 * n];
	}
	cout << " Nermuceq matrici tarrer@ " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 2*n-1; j < 2 * n; j++) {
			cout << matrix[i][j] << " ";
			if (matrix[i][j] > matrix[i + 1][j]) {
				int temp = matrix[i][j];
				matrix[i][j] = matrix[i + 1][j];
				matrix[i + 1][j] = temp;
				cout << matrix[i][j];
			}
		}
		cout << endl;
	}
	

	return 0;
} */


//499(done)
/*
#include <iostream>
using namespace std;

int main() {
	int size;
	int min = 0;
	int max = 0;
	int sum = 0;
	double avg = 0.0;
	cout << " Size of matrix (n x n) = ";
	cin >> size;


	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}

	cout << " Enter the values of your matrix " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}
     
	// max value of matrix;
	max = matrix[0][0];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}

 
	// min value of matrix
	min = matrix[0][0];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}
	//mecaguyn ev poqraguyn tarreri mijin tvabanakan@
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			avg = (min + max) / 2;
			if (matrix[i][j] > avg && matrix[i][j] % 2 == 0) {
				sum += matrix[i][j];
			}
		}
	}


	cout << " Sum =  " << sum;

	

	return 0;
}
*/

