// Link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}

// Link: https://codeforces.com/problemset/problem/1030/A
// Problem: In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(int i = a; i < b; i++)

// Constants
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void solve() {
    int n;
    cin >> n;  
    
    vector<int> a(n); 
    rep(i, 0, n) {
        cin >> a[i];
    }
     
    rep(i, 0, n) {
        if(a[i] == 1) {
            cout << "HARD" << endl;
            return;  
        }
    }
    
    cout << "EASY" << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();  // main function call
    
    return 0;
}