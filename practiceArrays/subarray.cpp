#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << "[";

            for(int k = i; k <= j; k++) {
                cout << arr[k] << ",";
            }
            
            cout << "]";
        }
    }

    return 0;
}