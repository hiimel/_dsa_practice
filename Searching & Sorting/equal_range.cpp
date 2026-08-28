#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    auto range = equal_range(arr.begin(), arr.end(), target);

    int cnt = range.second - range.first; // number of same elements
    cout << "Count: " << cnt << endl;

    // range 

    int start = range.first - arr.begin();
    int end = range.second - arr.begin() - 1;
    
    cout << "Index: (" << start << " " << end << ")" << endl;

    for(auto it = range.first; it != range.second; it++) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}