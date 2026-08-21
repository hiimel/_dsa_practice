//Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii

#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] < nums[i]) {
                cnt++;
            }
        }

        ans[i] = cnt;
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

    vector<int> elements = smallerNumbersThanCurrent(arr);
    for(int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }

    cout << endl;
    return 0;
}