/*
#include<iostream>
using namespace std;
int main() {

	int num[5], w[5], sum = 0, i, j, prime;
	cout << "Enter 5 numbers: ";
	for (i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (i = 0; i < 5; i++) {
		if (num[i] > 1) {
			for (j = 2; j < num[i]; j++) {		//Finding prime numbers
				prime = 1;
				if (num[i] % j == 0) {
					prime = 0;
					break;
				}		//Print if the number is prime or not by taking prime=0 and prime=1 
			}			//in if-else if but we dont need that here
		}
		if (prime == 1) {
			w[i] = 5;
		}
		else if ((num[i] % 4 == 0) && (num[i] % 6 == 0)) {
			w[i] = 4;
		}
		else {
			w[i] = 0;
		}
	}
	cout << endl << "Weights assigned to them are: ";
	for (i = 0; i < 5; i++) {
		cout << w[i] << " ";
	}
	cout << endl << "Sum of weights is: ";
	for (i = 0; i < 5; i++) {
		sum += w[i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
*/