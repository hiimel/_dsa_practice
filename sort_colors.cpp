#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] == 0) {
            cnt0++;
        } else if(nums[i] == 1) {
            cnt1++;
        } else {
            cnt2++;
        }
    }

    int idx  = 0;
    while(idx < cnt0) {
        nums[idx++] = 0;
    }

    while(idx < cnt1 + cnt0) {
        nums[idx++] = 1;
    }

    while(idx < cnt2 + cnt1 + cnt0) {
        nums[idx++] = 2;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortColors(arr);
    for(int x: arr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}