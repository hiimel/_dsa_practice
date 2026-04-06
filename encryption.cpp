#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        getline(cin, s);
        
        int n = s.length();

        // shifted letters + 3
        for(int i = 0; i < n; i++) {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 3;
            }
        }

        // reversing
        int start = 0, end = n - 1;
        while(start < end) {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }

        // half moved one position to the left
        int half = n / 2;
        for(int i = half; i < n; i++) {
            s[i] = s[i] - 1;
        }  
        
        cout << s << endl;
    }

    return 0;
}