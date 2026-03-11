#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; 
    cin >> n;

    long long prev2 = 1;
    long long prev1 = 0;
    long long curr;
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << prev1 << " ";
        } else {
            curr = (i - 1) * (prev1 + prev2);
            cout << curr << " ";
            prev2 = prev1;
            prev1 = curr;
        }
    }

    cout << endl;
    return 0;
}