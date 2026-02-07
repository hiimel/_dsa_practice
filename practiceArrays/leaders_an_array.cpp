#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> &arr, int n) {
    if(n == 0) {
        return {};
    }

    vector<int> leaders;
    
    // rightmost el is always leader
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);

    // traverse to 2nd last el to 1st el
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cin >> n;
     
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leaders_are = findLeaders(arr, n);
    for(int i : leaders_are) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}