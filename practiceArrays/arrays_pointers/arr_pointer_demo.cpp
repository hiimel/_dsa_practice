#include<bits/stdc++.h>
using namespace std;

void printArr1(int arr[], int n) {
    cout << "_print method 01: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printArr2(int *arr, int n) {
    cout << "_print method 02: ";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;
}

void printArr3(int *arr, int n) {
    cout << "-print method 03: ";
    for(int i = 0; i < n; i++) {
        cout << *arr << " ";
        arr++;
    }
}

void printAllArr(int *arr, int n) {
    cout << "_print 01: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "_print 02: ";
    for(int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;

    cout << "_print 03: ";
    for(int i = 0; i < n; i++) {
        cout << *arr << " ";
        arr++; // here, arr++ is being done because it is a pointer copy.
    }

    cout << endl;
}

int main() {
    int arr[20] = {1, 2, 3, 4, 5};
    int n = 5;

    // printArr1(arr, n);
    // printArr2(arr, n);
    // printArr3(arr, n);
    printAllArr(arr, n);
    return 0;
}