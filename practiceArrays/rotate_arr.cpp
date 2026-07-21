#include <iostream>
using namespace std;

void reverseArr(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void left_rotate_arr(int arr[], int n, int t) {
    t = t % n;

    reverseArr(arr, 0, t - 1);
    reverseArr(arr, t, n -1);
    reverseArr(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void right_rotate_arr(int arr[], int n, int t) {
    t = t % n;

    reverseArr(arr, 0, n - 1);
    reverseArr(arr, 0, t - 1);
    reverseArr(arr, t, n - 1);


    for(int i = 0; i < n; i++) {
        cout <<  arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(a[0]);

    int t = 3;

    right_rotate_arr(a, n, t);

    return 0;
}