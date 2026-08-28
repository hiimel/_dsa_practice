#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& nums, int x) {
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == x) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << linearSearch(arr, target) << endl;

    return 0;
}