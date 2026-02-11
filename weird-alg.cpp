// Link: https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 1) {
        if(n / 2 * 2 == n) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }

        cout << n << " ";
    }

    cout << endl;
    return 0;
}