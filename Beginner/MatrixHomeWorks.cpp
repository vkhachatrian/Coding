
// 509 --- 595


//509(patrast ka harc)

/*#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Enter the size of symbolic matrix\n N = " << endl;
	cin >> n;
	char** matrix = new char*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new char[n];
	}

	cout << " Enter the symbols of matrix " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (matrix[i][j] == 'a') {
				count++;
		}

		}
		cout << endl;
	}

	cout << " Count of elements = " << count;
	return 0;

} */

//512(patrast)

/*
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Enter the size of matrix\n n = ";
	cin >> n;
	bool is_equal = false;
	char** m = new char* [n];
	for (int i = 0; i < n; i++)
	{
		m[i] = new char[n];
	}
	cout << " Enter the symbols of matrix " << endl;
	for(int i = 0;i<n;i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
		}
	}

	char max= m[0][n-1];



	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j >= n-1-i; j--) {
			//if (i + j >= n - 1) {
				//max = m[0][n-1]; //TODO:
				if (max < m[i][j]) {
					max = m[i][j];
				}
				}
		}
	}

	cout << endl;

	if (max == 'z') {
		is_equal = true;
	}
	else is_equal = false;

	cout << is_equal << endl;
	return 0;
}
*/



//516(patrast)
 /*
#include <iostream>
using namespace std;

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

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			matrix[i][j] = 10 * (i +1)  ; //TODO:
		}
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
*/

//520(patrast)
/*
#include <iostream>
using namespace std;

int main() {
	int m, n;
	int d;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;


	cout << " Enter the number(D) ";
	cin >> d;

	int* arr = new int[m];
	cout << " Enter the values of array " << endl;
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	int** matrix = new int* [m];

	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{

			matrix[i][0] = arr[i];

	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++) {
			matrix[i][j] = arr[i] + j*d;

		}
	}

	cout << endl;
	cout << " Matrix = " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/



//526(patrast)


/*
#include <iostream>
using namespace std;


void input(int **matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}


int main() {

	int m, n;
	int k;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
		cout << " Cols(n) = ";
	cin >> n;


	cout << " Enter the number of row ";
	cin >> k;

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;
	input(matrix, m, n);

	double mult = 1.0;

		for (int j = 0; j < n; j++) {
			mult *= matrix[k][j];
		}



	cout << " Multiple of k row = " << mult << endl;

	return 0;
}
*/

//530(patrast)

//#include <iostream>
//using namespace std;
//
//void input(int** matrix, int m, int n) {
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//}
//
//
//int main() {
//
//	int m, n;
//	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
//	cin >> m,
//	cout << " Cols(n) = ";
//	cin >> n;
//
//	int** matrix = new int* [m];
//	for (int i = 0; i < m; i++) {
//		matrix[i] = new int[n];
//	}
//	cout << " Enter the values of matrix " << endl;
//	input(matrix, m, n);
//
//	int sum = 0;
//	cout << endl;
//
//  	for (int i = 0; i < m; i++) {
// 		for (int j = 0; j < n;j+=2) {
//				sum += matrix[i][j];
//				cout << endl;
//	    //cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	cout << " Sum = " << sum;
//	return 0;
//}


//534(patrast)

/*#include <iostream>
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
	int Col_number = 0;
	double mult = 1.0;
	double min = 1.0;


		for (int i = 0; i < m; i++) {
			min *= matrix[i][0];
		}




	for (int j = 0; j < n; j++)
	{
		for (int i = 1; i < m; i++) {

			mult *= matrix[i][j];
			//if (i == m - 1){
			//	if (min > mult) {
			//		min = mult;
			//		Col_number = j;
			//	}
			//	mult = 1.0;
			//	}
		}
		if(min > mult){
			min = mult;
			Col_number = j;
		}

	}

	cout << " Syan hamar@ = " << Col_number;
	return 0;
} */


//538(patrast)

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
	int average = 0;
	int sum = 0;


	for (int i = 0; i < m; i++) {
		for (int j = 0;j < n; j++) {
			sum += matrix[i][j];
		}
	}
	int count = 0;


	average = sum / (n * m);
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			if (matrix[i][j] > average) {
				count++;
			}
		}
		cout << "Count = " << count << " ";
		count = 0;
	}



	return 0;
}
*/

//542(patrast)
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
	int sum = 0;
	int max_index = -1;


	for (int j = 0; j < n; j++) {

		bool isOddColumn = true;

		for (int i = 0; i < m; i++) {
			if (matrix[i][j] % 2 == 0) {
				isOddColumn = false;
				break;
			}

		}

		if(isOddColumn){
			if(max_index < j)
				max_index = j;
		}

	}

	if(max_index == -1)
		cout << " NO \n";
	else
		cout << " index ===   "  << max_index;



	return 0;
}
*/





//546(patrast)
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


	int count = 0;



	for (int j = 0; j < n; j++) {

		bool isSameNumberInCol = false;

		for (int i = 0; i < m - 1; i++) {
			for(k = i+1; k < m; k++){
				if (matrix[i][j] == matrix[k][j]) {
					isSameNumberInCol = true;
					break;
				}
			}
			if(isSameNumberInCol)
				break;
		}



		if(!isSameNumberInCol){
			count++;
		}

	}


		cout << " count ===   "  << count;



	return 0;
}
*/





//550(patrast)
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

bool isIncreaseOrder(int *arr, int size){

	for (int i = 0; i < size - 1; i++) {
		bool isSmall = true;
		for(k = i+1; k < size; k++){
			if (arr[i] > arr[k]) {
				isSmall = false;
				break;
			}
		}
		if(!isSmall)
			return false;;
	}
	return true;
}

bool isDecreaseOrder(int *arr, int size){

	for (int i = 0; i < size - 1; i++) {
		bool isSmall = true;
		for(k = i+1; k < size; k++){
			if (arr[i] < arr[k]) {
				isSmall = false;
				break;
			}
		}
		if(!isSmall)
			return false;;
	}
	return true;
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


	int count = 0;
	int count2 = 0;
	int max = 0;

	bool isThereRow = false;

	for (int i = 0; i < m; i++) {
		if(isIncreaseOrder(matrix[i], n) {
			isThereRow = true;
			if(max < matrix[i][n-1]){
				max = matrix[i][n-1];
			}
			cont++;
		}
		if(isDecreaseOrder(matrix[i], n)){
			isThereRow = true;
			if(max < matrix[i][0]){
				max = matrix[i][0];
			}
			count2++;
		}

	}
	if(!isThereRow){
		cout << "NO \n";
	}
	else{
		cout << " max ===   "  << max;
		cout << " cont ===   "  << count;
		cout << " cont2 ===   "  << count2;
	}


	return 0;
}
*/


//554
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


int main(){


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

	for(int j = K;j < n;){
		for(int i = 0;i<m;i++){
			int temp = matrix[i][K];
			matrix[i][K] = matrix[i][J];
			matrix[i][J] = temp;
		}

	}

	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
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

int colMax = 0;
int colMin = 0;



void findMaximum(int** matrix, m, n){
	int max = matrix[0][0];
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
		if(max < matrix[i][j]){
			max = matrix[i][j];
			colMax = j;
		}
		}
	}
}


void findMinimum(int** matrix, m, n){
	int min = matrix[0][0];
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
		if(min > matrix[i][j]){
			min = matrix[i][j];
			colMin = j;
		}
		}
	}
}



int main(){


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


	for(int j = colmax;j<n;){
		int temp = matrix[i][colMax];
		matrix[i][colMax] = matrix[i][colMin];
		matrix[i][colMin] = temp;
	}


	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}




	return 0;
}
*/

//562

#include <iostream>
using namespace std;


void input(int** matrix, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

int main(){


int m, n;
	cout << " Enter the (mxn) size of matrix\n Rows(m) =  ";
	cin >> m,
	cout << " Cols(n) = ";
	cin >> n;
	if(n % 2 != 0){
		cout << " Cols must be even\n Cols(n) = ";
		cin >> n;
	}

	int** matrix = new int* [m];
	for (int i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	cout << " Enter the values of matrix " << endl;

	input(matrix, m, n);

	for(int j = 0;j<n-1;j++){
		for(int i = 0;i<m;i++){
		int temp = matrix[i][j];
		matrix[i][j] = matrix[i][n/2];
		matrix[i][n/2] = temp;
		int temp2 = matrix[i][j+1];
		matrix[i][j+1] = matrix[i][n/2+1];
		matrix[i][n/2+1]=temp2;
		}
	}

		for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}




	return 0;
}
























}