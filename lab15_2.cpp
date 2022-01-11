#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool a[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMatrix(double a[][N]){
	for(int i=1;i<= N;i++){
		cout << "Row " << i <<": ";
		for(int j=0;j<N;j++){
			cin >> a[i-1][j];
		}
	}
}

void findLocalMax(const double a[][N], bool b[][N]){

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			b[i][j]  = false;
		}
	}
	for(int i=0;i<N-2;i++){

		for(int j=0;j<N-2;j++){

			if( a[i+1][j+1] >= a[i+2][j+1] && a[i+1][j+1] >= a[i+1][j] && a[i+1][j+1] >= a[i+1][j+2] && a[i+1][j+1] >= a[i][j+1]){

				b[i+1][j+1] = true;

			}else{

				b[i+1][j+1] = false;

			}
		}
	}
}