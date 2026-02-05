#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

long long calnPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << calnPr(n, r) << endl;
    return 0;
}