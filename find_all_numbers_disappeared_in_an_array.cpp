#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> ans;
    for(int i = 1; i <= nums.size(); i++) {
        if(!binary_search(nums.begin(), nums.end(), i)) {
            ans.push_back(i);
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

    vector<int> els = findDisappearedNumbers(arr);

    for(int i = 0; i < els.size(); i++) {
        cout << els[i] << " ";
    }

    cout << endl;

    return 0;
}