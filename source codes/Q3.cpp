/*
#include<iostream>
using namespace std;
int main() {
    
    char arr[20];
    int size = 0, i, j;
    cout << "Enter charaters/Elements in the array: ";
    cin >> arr;

    for (size = 0; size != '\0'; size++);
    int end = size - 1;
    int mid = (0 + end) / 2;

    for (i = 0; i < mid;) {
        if ((arr[i] >= 'A' && arr[i] <= 'z') && (arr[end] >= 'A' && arr[end] <= 'z')) {
            char temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            i++;
            end--;
        }
        if (!(arr[i] >= 'A' && arr[i] <= 'z')) {
            i++;
        }
        if (!(arr[end] >= 'A' && arr[end] <= 'z')) {
            end--;
        }
    }
    for (j = 0; j < size; j++) {
        cout << arr[j];
    }

    system("pause");
    return 0;
}
*/