// Link: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '4' || n[i] == '7') {
            cnt++;
        }
    }

    bool isCheck = true;
    while(cnt != 0) {
        int digit = cnt % 10;
        if(digit != 4 && digit != 7) {
            isCheck = false;
            break;
        }

        cnt /= 10;
    }

    if(isCheck) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}