// Link: https://leetcode.com/problems/product-of-array-except-self/description/

#include <bits/stdc++.h>
using namespace std;

// brute force approach

vector<int> version_1(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        int product_sum = 1;
        for(int j = 0; j < n; j++) {
            if(j != i) {
                product_sum *= nums[j];
            }
        }

        ans[i] = product_sum;
    }

    return ans;
}
 
// suffix & preffix approach
vector<int> version_2(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n), prefix(n), suffix(n);
    
    prefix[0] = 1;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    suffix[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for(int i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
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

    vector<int> elements = version_2(arr);
    for(int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }

    cout << endl;

    return 0;
 }