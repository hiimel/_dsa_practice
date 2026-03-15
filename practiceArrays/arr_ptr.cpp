#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // array name  and address of first element are the same
    cout << "_array name: " << arr << endl;
    cout << "_1st element address: " << &arr[0] << endl;

    // cout << &arr[1] << endl; // different address

    if(arr == &arr[0]) {
        cout << "_array name and address of 1st element are the same." << endl;
    }

    return 0;
}