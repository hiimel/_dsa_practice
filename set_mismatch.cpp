// Link: https://leetcode.com/problems/set-mismatch/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii

#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorsNums(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    vector<int> ans;

    for(int i = 0; i < n - 1; i++) {
        if(nums[i] == nums[ i + 1]) {
            ans.push_back(nums[i]);
        }
    }

    for(int i = 1; i <= n; i++) {
        if(!binary_search(nums.begin(), nums.end(), i)) {
            ans.push_back(i);
            break;
        }
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

    vector<int> elements = findErrorsNums(arr);

    for(int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }

    cout << endl;
    return 0;
}