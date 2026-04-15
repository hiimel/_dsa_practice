// Link: https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int smallLetters = 0;
    int capitalLetters = 0;

    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            smallLetters++;
        } else {
            capitalLetters++;
        }
    }

    for(int i = 0; i < n; i++) {
        if(capitalLetters > smallLetters) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}