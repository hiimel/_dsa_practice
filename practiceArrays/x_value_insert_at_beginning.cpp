#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[20] = {4, 5, 6,7, 8};
    int n = 5;
    int el[3] = {1, 2, 3};
    int m = 3;

    for(int i = n - 1; i >= 0; i--) {
        a[i + m] = a[i];
    }

    for(int i = 0; i < m; i++) {
        a[i] = el[i];
    }

    n = n + m;
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}