#include <bits/stdc++.h>
using namespace std;

void reverseFunction(vector<int>& nums, int left, int right) {

    while(left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left++;
        right--;
    }
}


void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    reverseFunction(nums, 0, k - 1);
    reverseFunction(nums, k, n - 1);
    reverseFunction(nums, 0, n - 1);

    for(int v: nums) {
        cout << v << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(arr, k);

    return 0;
}