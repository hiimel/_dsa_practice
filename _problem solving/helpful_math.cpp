// Link: https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    vector<int> digits;

    for(int i = 0; i < n; i++) {
        if(s[i] != '+') {
            digits.push_back(s[i] - '0');
        }
    }

    sort(digits.begin(), digits.end());

    for(int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if(i < digits.size() - 1) {
            cout << "+";
        }
    }
    
    return 0;
}