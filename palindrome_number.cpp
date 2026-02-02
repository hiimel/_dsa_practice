#include <bits/stdc++.h>
using namespace std;

bool isPalindrome( string &n) {
    int start = 0;
    int end = n.length();
    
    while(start < end) {
        if(n[start++] != n[end--]) {
            return false;
        }
    }

    return true;
}

int main() {
    string n;
    cin >> n;

    if(isPalindrome(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}