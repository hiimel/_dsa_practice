#include <bits/stdc++.h>
using namespace std;

bool isEqual(vector<int> &a, vector<int> &b, int n, int m) {
    if(n != m) {
        return false;
    }

    unordered_map<int, int> cntA, cntB;
    for(int x: a) {
        cntA[x]++;
    }

    for(int i: b) {
        cntB[i]++;
    }
    
    return cntA == cntB;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if(isEqual(a, b, n, m)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
 }