#include <bits/stdc++.h>
using namespace std;

void updateElement(int arr[], int &n, int pos, int newElement) {
    if(n == 0) {
        cout << "_empty array !" << endl;
        return;
    }

    if(pos < 0 || pos > n) {
        cout << "_wrong position !" << endl;
        return;
    }

    int oldElement = arr[pos];
    arr[pos] = newElement;
}

int main() {
    int n;
    cin >> n;
    
    int position;
    cin >> position;

    int newValue;
    cin >> newValue;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    updateElement(arr, n, position, newValue);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}