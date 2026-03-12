#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(int arr[], int &n, int capacity) {
    if(n >= capacity) {
        cout << "_insert is not possible" << endl;
        return;
    }

    arr[n] = 50;
    n++;
}

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4;
    int capacity = 10;

    insertAtEnd(arr, n, capacity);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}