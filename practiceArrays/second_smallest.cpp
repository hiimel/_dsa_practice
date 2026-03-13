#include <bits/stdc++.h>
using namespace std;

void findSecondSmallest(int arr[], int n) {
    if(n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl;
        return;
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    cout << smallest << endl;
    cout << second_smallest << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findSecondSmallest(arr, n);

    return 0;
}