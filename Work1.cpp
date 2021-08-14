


//554(patrast)

/*
#include <iostream>
using namespace std;


void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}


int main() {


	int m, n;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;

	input(matrix, m, n);

	int K = 0;
	int J = 0;
	cout << " Enter the value of K\n K = ";
	cin >> K;
	cout << " Enter the value if J\n J = ";
	cin >> J;
	

	if((K < 1 || K > m) || (K >= J) || (J > m || J < 1)){
		cout << " Wrond interval of K or J ! (1<=K<J<=M) " << endl;
		return -1;
	}
	

	for (int i = 0; i < m; i++) {
		int temp = matrix[i][K];
		matrix[i][K] = matrix[i][J];
		matrix[i][J] = temp;
	}
		

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}
*/

//558
/*
#include <iostream>
using namespace std;

void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}






int findMaximum(int** matrix, int m, int n) {
	int colMax = 0;
	int max = matrix[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];	
				colMax = j;
			}
			
		}
		
	}
	return colMax;
}


int findMinimum(int** matrix,int m, int n) {
	int colMin = 0;
	int min = matrix[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];	
				colMin = j;
			}
			
		}
	}
	return colMin;
}



int main() {


	int m, n;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;

	input(matrix, m, n);

	int colMax = findMaximum(matrix, m, n);
	int colMin = findMinimum(matrix, m, n);
	
	if (colMax == colMin) {
		cout << " Minimum and Maximum value  of matrix will not be in same colum ! ";
		return -1;
	}


	for (int i = 0; i < m;i++) {
		int temp = matrix[i][colMax];
		matrix[i][colMax] = matrix[i][colMin];
		matrix[i][colMin] = temp;
	}


	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
} */


//562
/*
* 
#include <iostream>
using namespace std;


void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

int main() {


	int m, n;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;
	if (n % 2 != 0) {
		cout << " Cols must be even\n Cols(n) = ";
		cin >> n;
	}

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;

	input(matrix, m, n);

		for (int i = 0; i < m; i++) {
			int temp = matrix[i][0];
			matrix[i][0] = matrix[i][n / 2];
			matrix[i][n / 2] = temp;
		}


		for (int j = 1; j < n / 2; j++) {
			for (int i = 0; i < m; i++) {
				int temp2 = matrix[i][j];
				matrix[i][j] = matrix[i][n / 2 + j];
				matrix[i][n / 2 + j] = temp2;
			}
		}
	

	

	cout << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
 */

//566 
/*
#include <iostream>
using namespace std;


void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}


void print(int** matrix, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

	void deleteColum(int** matrix, int m, int n, int k) {
		for (int i = 0; i < m;i++) {
			for (int j = k; j < n - 1;j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}
	}
		int main() {


			int m, n;
			cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
			cin >> m,
				cout << " Cols(n) = ";
			cin >> n;


			int** matrix = new int* [m];
			for (int i = 0; i < m; i++) {
				matrix[i] = new int[n];
			}
			cout << " Enter the values of matrix " << endl;

			input(matrix, m, n);

			int k = 0;
			cout << " Enter k\n k = ";
			cin >> k;

			if (k < 1 || k > n) {
				cout << " K is in wrong interval ( 1<=K<=N(cols) ) ";
				cin >> k;
			}

			deleteColum(matrix, m, n, k);

			n--;

			print(matrix, m, n);

			for (int i = 0; i < m; i++) {
				delete[] matrix[i];
			}
			delete[] matrix;


			return 0;
		}
		*/

#include <iostream>
using namespace std;


void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}


void print(int** matrix, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}




int main() {


	int m, n;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;


	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;

	input(matrix, m, n);


	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			if (matrix[i][j] > 0) {
				matrix[i][j] = 0;
			}
			
		}
	}

	
	print(matrix, m, n);

	/*for (int i = 0; i < m; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;*/


	return 0;
}



