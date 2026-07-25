#include <bits/stdc++.h>
using namespace std;

bool isDisjoint(vector<int> &a, vector<int> &b) {
    unordered_set<int> setA(a.begin(), a.end());

    for(int n: b) {
        if(setA.find(n) != setA.end()) {
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

    if(isDisjoint(a, b)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}