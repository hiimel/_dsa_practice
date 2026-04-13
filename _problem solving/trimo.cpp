// Link: https://atcoder.jp/contests/abc453/tasks/abc453_a

#include <bits/stdc++.h>
using namespace std;

string removingLeadingLetters(string s, int n) {
    for(int i = 0; i < n; i++) {
        if(s[i] != 'o') {
            string res = s.substr(i);
            return res;
        }
    }

    return " ";
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << removingLeadingLetters(s, n) << endl;
    return 0;
}