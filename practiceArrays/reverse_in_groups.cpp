#include <iostream>
using namespace std;

void revGroup_wise(int arr[], int n, int k) {
    for(int i = 0; i < n; i += k) {
        int start = i;
        int end = min(i + k - 1, n - 1);

        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int a[] = {5, 6, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 5;

    revGroup_wise(a, n, k);

    return 0;
}