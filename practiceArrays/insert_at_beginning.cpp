#include<bits/stdc++.h>
using namespace std;

void insertAtBeginning(int arr[], int &n, int capacity) {
    if(n + 2 > capacity) {
        cout << "_insert isn't possible !" << endl;
        return;
    }

    for(int i = n - 1; i >= 0; i--) {
        arr[i + 2] = arr[i];
    }

    arr[0] = 5;
    arr[1] = 8;
    n += 2;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int capacity = 10;

    cout << "Before: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 

    cout << endl;

    cout << "After: " << endl;
    insertAtBeginning(arr, n, capacity);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}