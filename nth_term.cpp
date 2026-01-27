#include <bits/stdc++.h>
using namespace std;

void nthTermAP(int a1, int a2, int n) {
    int common_distance = a2 - a1;
    int AP = a1 + (n - 1) * common_distance;
    
    cout << AP << endl;
}

int main() {
    int a1, a2;
    cin >> a1 >> a2;

    int n; 
    cin >> n;

    nthTermAP(a1, a2, n);
    return 0;
}