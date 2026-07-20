#include <iostream>
using namespace std;

void printSubarr(int a[], int n) {
    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            for(int p = start; p <= end; p++) {
                cout << a[p] << ",";
            }

            cout << endl;
        }
    }
}

int main() {
    int a[] = {1, 2, 3, 4};
    printSubarr(a, 4);

    return 0;
}