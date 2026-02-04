#include <bits/stdc++.h>
using namespace std;

bool isPower(int a, int b) {
    if(a == 1) {
        return true;
    }

    if(b == 0) {
        return false;
    }

    if(b == 1) {
        return false;
    }

    int n = b;

    while(n < a) {
        n = n * b;
    }

    return n == a;
}

int main() {
    int x, y;
    cin >> x >> y;
    
    if(isPower(x, y)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}