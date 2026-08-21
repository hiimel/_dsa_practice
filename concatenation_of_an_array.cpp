#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> copyArr;

    for(int i = 0; i < nums.size(); i++) {
        copyArr.push_back(nums[i]);
    }

    for(int i = 0; i < nums.size(); i++) {
        copyArr.push_back(nums[i]);
    }

    return copyArr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> elements = getConcatenation(arr);
    
    for(int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }

    cout << endl;
    return 0;
}