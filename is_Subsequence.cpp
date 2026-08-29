#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0;
    int j = 0;

    while(i < s.length() && j < t.length()) {
        if(s[i] == t[j]) {
            i++;
        }

        j++;
    }

    if(i == s.length()) {
        return true;
    }
    
    return false;
}

int main() {
    string s, t;
    cin >> s >> t;

    if(isSubsequence(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}