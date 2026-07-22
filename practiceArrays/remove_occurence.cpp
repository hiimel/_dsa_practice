#include <iostream>
#include <vector>
using  namespace std;

void removeDuplicates(int arr[], int n) {
    vector<int> values;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            continue;
        } else {
            values.push_back(arr[i]);
        }
    }

    values.push_back(arr[n - 1]);

    for(int i: values) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);

    return 0;
}