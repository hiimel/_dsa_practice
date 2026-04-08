#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool isQuote = true;

    while(getline(cin, s)) { // end of file 
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '"') {
                if(isQuote) {
                    cout << "``";
                } else {
                    cout << "''";
                }

                isQuote = !isQuote;
            } else {
                cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}