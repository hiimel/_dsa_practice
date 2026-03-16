#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[50] = {1, 2, 5, 6, 7};
    int n = 5;
    int position = 2;
    int x = 3, y = 4;

    // move right from position to end
    for(int i = n - 1; i >= position; i--) {
        a[i + 2] = a[i];
    }

    a[position] = x;
    a[position + 1] = y;

    n += 2;

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}