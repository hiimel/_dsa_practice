//Link : https://leetcode.com/problems/running-sum-of-1d-array/description/

#include <bits/stdc++.h>
using namespace std;

// brute force
vector<int> version_1(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += nums[i];
        ans[i] = sum;
    }

    return ans;
}

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);
    
    ans[0] = nums[0];
    for(int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] + nums[i];
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> els = version_1(arr);
    for(int num: els) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}