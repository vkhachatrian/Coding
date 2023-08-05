
//570(patrast)

/*
#include <iostream>
using namespace std;



void input(int** matrix, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}
void print(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}


int main() {
	int rows, cols;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> rows,
		cout << " Cols(n) = ";
	cin >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}


	cout << " Enter the values of matrix " << endl;
	input(matrix, rows, cols);

	bool arePositive;
	for (int j = 0; j < cols; ++j) {
		arePositive = true;
		for (int i = 0; i < rows; ++i) {
			if (matrix[i][j] <= 0) {
				arePositive = false;
				break;
			}
		}
		if (arePositive) {
			for (int h = j; h < cols-1; h++) {
				for (int i = 0; i < rows; ++i) {
					matrix[i][h] = matrix[i][h + 1];
				}
			}
			cols--;
			j--;
		}
	}


	cout << endl << endl;
	print(matrix,rows,cols);


	return 0;
}
*/


//574(patrast)

/*
#include <iostream>
using namespace std;

void input(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows;++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix[i][j];
		}
	}
}


int main() {
	int rows, cols, min, minIndex = 0;
	cout << " Enter the size of rows " << endl;
	cin >> rows;
	cout << " Enter the size of cols " << endl;
	cin >> cols;

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}


	cout << " Enter values of matrix " << endl;
	input(matrix, rows, cols);

	min = matrix[0][0];

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
				minIndex = j;
			}
		}
	}


	int** newMatrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		newMatrix[i] = new int[cols + 1];
	}


	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j <= minIndex; ++j) {
			newMatrix[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = minIndex; j < cols; ++j) {
			newMatrix[i][j + 1] = matrix[i][j];
		}
	}


	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols + 1; ++j) {
			cout << newMatrix[i][j] << "  ";
		}
		cout << endl;
	}

	delete[] matrix;
	for (int i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}


	return 0;
}
*/

//580(patrast)
/*
#include <iostream>
using namespace std;


int main() {
	int rows, cols;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> rows,
	cout << " Cols(n) = ";
	cin >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}

	cout << " Enter the values of matrix " << endl;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix[i][j];
		}
	}

	for (int j = 0; j < cols; ++j) {
		for (int i = 0; i < rows-1; ++i) {
			for (int k = i + 1; k < rows; ++k) {
				if (matrix[i][j] < matrix[k][j]) {
					int temp = matrix[i][j];
					matrix[i][j] = matrix[k][j];
					matrix[k][j] = temp;

				}
			}
		}
	}

	cout << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; ++j) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	return 0;
}
*/


//589
/*
#include <iostream>
using namespace std;

int main() {
	int size, min;
	cin >> size;
	int** matrix = new int* [size];

	for (int i = 0; i < size; ++i) {
		matrix[i] = new int[size];
	}

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cin >> matrix[i][j];
		}
	}
	

	for (int j = 0; j < size-1; ++j) {
		for (int i = 0; i < j && i + j < size - 1; ++i) {
			matrix[i][j] = 1;
		}
	}




	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}



	return 0;
}

*/


//595
/*

#include <iostream>
using namespace std;


int main() {
	int rows, cols;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> rows,
		cout << " Cols(n) = ";
	cin >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}

	cout << " Enter the values of matrix " << endl;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix[i][j];
		}
	}
	bool haveZero;
	for (int i = 0; i < rows; ++i) {
		haveZero = false;
		for (int j = 0; j < cols; ++j) {		
			if (matrix[i][j] == 0) {
				haveZero = true;
				break;
			}
		}	
		if (haveZero) {
			for (int j = 0; j < cols; ++j) {
				matrix[i][j] = 0;
			}
		}

	}

	for (int i = 0; i < rows;++i) {
		for (int j = 0; j < cols;++j) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}

	return 0;
}
*/