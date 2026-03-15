#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // accessing arrays with pointers
    cout << arr[0] << " == " << ptr[0] << endl;
    cout << &arr[0] << " == " << ptr << endl;

    cout << arr[1] << " == " << ptr[1] << endl;
    cout << &arr[1] << " == " << ptr + 1 << endl;

    cout << arr[2] << " == " << ptr[2] << endl;
    cout << &arr[2] << " == " << ptr + 2 << endl;

    cout << arr[3] << " == " << ptr[3] << endl;
    cout << &arr[3] << " == " << ptr + 3 << endl;

    cout << arr[4] << " == " << ptr[4] << endl;
    cout << &arr[4] << " == " << ptr + 4 << endl;

    return 0;
}