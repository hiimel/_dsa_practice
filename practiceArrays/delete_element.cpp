#include <bits/stdc++.h>
using namespace std;

void deleteElement(int arr[], int &n, int element) {
    int position = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            position = i;
            break;
        }
    }

    if(position == -1) {
        cout << "_element not found !" << endl;
        return;
    }

    for(int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;
    cin >> element;

    deleteElement(arr, n, element);
    for(int i = 0; i <  n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}