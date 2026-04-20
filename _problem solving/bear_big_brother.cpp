// Link: https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int yearsCnt = 0;
    while(a <= b) {
        a *= 3;
        b *= 2; 
        yearsCnt++;
    }

    cout << yearsCnt << endl;
    return 0;
} 