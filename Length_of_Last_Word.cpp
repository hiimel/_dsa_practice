#include <bits/stdc++.h>
using namespace std;

int lengthlengthOfLastWord(string s) {
    int i = s.length() - 1;
    
    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    int end = i;

    while(i >= 0 && s[i] != ' ') {
        i--;
    }

    return end - i;
}

int main() {
    string str;
    getline(cin, str);

    cout << lengthlengthOfLastWord(str) << endl;

    return 0;
}