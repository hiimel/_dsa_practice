// Link: https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int frequency[26] = {0};
    for(int i = 0; i < s.length(); i++) {
        frequency[s[i] - 'a']++;
    }

    int count = 0;
    for(int i = 0; i < 26; i++) {
        if(frequency[i] > 0) {
            count++;
        }
    }

    if(count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}