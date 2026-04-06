// Link: https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;

        long long ar[n];
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        map<long long, long long> freq;
        for(int i = 0; i < n; i++) {
            freq[ar[i]]++;
        }

        if(freq.size() >= 3) {
            cout << "NO" << endl;
        } else {
            long long f1 = freq.begin()-> second;
            long long f2 = freq.rbegin()-> second;

            if(f1 == f2) {
                cout << "YES" << endl;
            } else if(n % 2 == 1 && abs(f1 - f2) == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}