#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();

    if(n <= 2) {
        return n;
    }

    int cnt = 1;
    int pos = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        } 

        if(cnt <= 2) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    return pos;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << removeDuplicates(arr) << endl;

    return 0;
}