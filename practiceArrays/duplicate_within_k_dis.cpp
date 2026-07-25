#include <bits/stdc++.h>
using namespace std;

 bool isDuplicate_kDistance(vector<int> &a, int k) {
    unordered_set<int> window;

    for(int i = 0; i < a.size(); i++) {
        if(window.find(a[i]) != window.end()) {
            return true;
        }

        window.insert(a[i]);

        if(window.size() > k) {
            window.erase(a[i - k]);
        }
    }

    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(isDuplicate_kDistance(a, k)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}