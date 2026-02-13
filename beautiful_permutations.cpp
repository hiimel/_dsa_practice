// Link: https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // for even 
    int even;
    if(n % 2 == 0) {
        even = n;
    } else {
        even = n - 1;
    }

    while(even >= 2) {
        cout << even << " ";
        even -= 2;
    }

    int odd;
    if(n % 2 == 1) {
        odd = n; 
    } else {
        odd = n - 1;
    }

    while(odd >= 1) {
        cout << odd << " ";
        odd -= 2;
    }

    cout << endl;
    return 0;
}

