// Link: https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();
    int maxRepetitions = 1;
    int currRepetitions = 1;

    for(int i = 1; i < len; i++) {
        if(s[i] == s[i - 1]) { // if same as previous then count
            currRepetitions++;
            maxRepetitions = max(maxRepetitions, currRepetitions);
        } else {
            currRepetitions = 1; // if diff then start over 
        }
    }

    cout << maxRepetitions << endl;
    return 0;
}