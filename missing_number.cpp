// Link: http://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int getAll_sum = n * (n + 1) / 2;

    int givenNum_sum = 0;
    for(int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        
        givenNum_sum += x;
    }

    int missing_value = getAll_sum - givenNum_sum;
    cout << missing_value << endl;
    return 0;
}