// Link: https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    while(1) {
        cout << n << " ";
        if(n == 1) {
            break;
        }

        if(n / 2 * 2 == n) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }

    }

    cout << endl;
    return 0;
}