#include <iostream>
using namespace std;

void adding_one(int arr[], int n) {
    long long  number = 0;

    for(int i = 0; i < n; i++) {
        number = number  * 10 +  arr[i];
    }

    cout << number + 1 << endl;
}

int main() {
    int arr[] = {9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    adding_one(arr, n);

    return 0;
}