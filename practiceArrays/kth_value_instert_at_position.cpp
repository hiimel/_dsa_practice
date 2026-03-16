#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[20] = {1, 2, 7, 8, 9};
    int n = 5;
    int position = 2;
    int values[4] = {3, 4, 5, 6};
    int m = 4;
    
    // move right from position to end
    for(int i = n - 1; i >= position; i--) {
        a[i + m] = a[i];
    }

    for(int i = 0; i < m; i++) {
        a[position + i] = values[i]; // value setting
    }

    n += m;

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}