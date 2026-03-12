// Link: https://cses.fi/problemset/task/1071

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int result;
    while(t--) {
        long long x, y;
        cin >> y >> x;

        long long n = max(x, y);
        if(n % 2 == 1) {
            if(y == n) {
                result = (n - 1) * (n - 1) + x;
            } else {
                result = (n * n) + 1 - y;
            }

        } else {
            if(x == n) {
                result = (n - 1) * (n - 1) + y;
            } else {
                result = (n * n) + 1 - x;
            }
        }

        cout << result << endl;
    }

    return 0;
}