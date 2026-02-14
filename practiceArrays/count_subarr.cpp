// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        for(int i = 0; i < n; i++) {
            count++; // for single element
            for(int j = i + 1; j < n; j++) {
                if(arr[j] < arr[j - 1]) {
                    break;
                }

                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}