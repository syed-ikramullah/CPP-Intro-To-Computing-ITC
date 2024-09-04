/*
#include<iostream>
using namespace std;
int main() {

	int A[6], B[7], C[13], i, k = 0;
	cout << "Enter elements of array A: ";
	for (i = 0; i < 6; i++) {
		cin >> A[i];
	}
	cout << endl << "Enter elements of array B: ";
	for (i = 0; i < 7; i++) {
		cin >> B[i];
	}
	for (i = 0; i < 6; i++) {
		if (A[i] % 2 == 0) {
			C[k] = A[i];
			k++;
		}
	}
	for (i = 0; i < 7; i++) {
		if (B[i] % 2 == 0) {
			C[k] = B[i];
			k++;
		}
	}
	for (i = 5; i >= 0; i--) {
		if (A[i] % 2 != 0) {
			C[k] = A[i];
			k++;
		}
	}
	for (i = 6; i >= 0; i--) {
		if (B[i] % 2 != 0) {
			C[k] = B[i];
			k++;
		}
	}
	cout << endl << "Array after Updating: ";
	for (i = 0; i < 13; i++) {
		cout << C[i] << " ";
	}

	system("pause");
	return 0;
}
*/