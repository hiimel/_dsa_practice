#include <bits/stdc++.h>
using namespace std;

void factors(int n) {
    int values = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    factors(n);
}