#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b) {
    unordered_set<int> setA(a.begin(), a.end());

    for(int i: b) {
        if(setA.find(i) == setA.end()) {
            return false;
        }
    }

    return true;
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

    if(isSubset(a, b)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}