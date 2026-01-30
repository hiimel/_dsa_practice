#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }

    if(b == 0) {
        return a;
    }

    if(a == b) {
        return a;
    }

    if(a > b) {
        if(a % b == 0) {
            return b;
        }

        return gcd(a - b, b);
    }

    if(b > a) {
        if(b % a == 0) {
            return a;
        }

        return gcd(a, b - a);
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
    return 0;
}