#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target_value;
    cin >> target_value;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target_value) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "_target value not found at index !" << endl;
    return 0;
}