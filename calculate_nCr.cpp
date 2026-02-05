#include <bits/stdc++.h>
using namespace std;

long long factorial(int a) {
    long long result = 1;
    for(int i = 2; i <= a; i++) {
        result *= i;
    }

    return result;
}

long long calnCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << calnCr(n, r) << endl;
    return 0;
}