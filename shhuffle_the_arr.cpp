#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res;
    
    for(int i = 0; i < n; i++) {
        res.push_back(nums[i]);
        res.push_back(nums[n + i]);
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(2 * n);
    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    vector<int> res = shuffle(arr, n);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;

}