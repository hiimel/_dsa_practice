#include<bits/stdc++.h>
using namespace std;

void maxAndSecondMax(int arr[], int n) {
    if(n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl;
        return;
    }

    int max = INT_MIN;
    int second_max = INT_MIN;
    
    for(int i= 0; i < n; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(second_max < arr[i] && arr[i] != max) {
            second_max = arr[i];
        }
    }

    cout << max << endl;
    cout << second_max << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    maxAndSecondMax(arr, n);
    
    return 0;
}