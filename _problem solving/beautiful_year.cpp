// Link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int year) {
    string s = to_string(year);
    for(int i = 0; i < s.length(); i++) {
        for(int j = i + 1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int year;
    cin >> year;

    for(int i = year + 1; i <= 9999; i++) {
        if(isDistinct(i)) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}