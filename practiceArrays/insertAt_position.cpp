#include <bits/stdc++.h>
using namespace std;

void insertAtPosition(int arr[], int &n, int capacity, int position, int element) {
    if(n >= capacity) {
        cout << "_insert not possible" << endl;
        return;
    }

    if(position < 0 || position > n) {
        cout << "_invalid position" << endl;
        return;
    }

    // Move right from position to end
    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;
}

int main() {
    int arr[10] = {10, 30, 40, 50};
    int n = 4;
    int capacity = 10;
    int element = 20;
    int position = 1;

    insertAtPosition(arr, n, capacity, position, element);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}