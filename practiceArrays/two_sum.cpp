#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target) {
    int left = 0;
    int right = n - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            return{left, right};
        } else if(sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};

}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> result = twoSum(arr, n, target);

    cout << "Sum of Numbers: " << endl;
    cout << arr[result[0]]<< "+" << arr[result[1]] << endl;

    cout << "Index: " << endl;
    cout << result[0] << " " << result[1] << endl;

    return 0;
}