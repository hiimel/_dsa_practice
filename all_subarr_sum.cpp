#include <iostream>
using namespace std;

void subarrSum(int *arr, int n) {
    for(int start = 0; start < n; start++) {
        for(int end =start; end < n; end++) {
            int currSum  = 0;

            for(int i = start; i <= end; i++) {
                currSum += arr[i];
            }

            cout << currSum << ",";
        }

        cout << endl;
    }
}

int main() {
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);

    subarrSum(a, n);

    return 0;
}