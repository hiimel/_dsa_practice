#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
    int left = 0; 
    for(int right = 1; right < n; right++) {
        if(arr[right] != arr[left]) {
            left++;
            arr[left] = arr[right];
        }
    }

    return left + 1 ;
}

int main() {
    vector<int> arr = {1, 1, 1, 2, 2, 4};
    int n = arr.size();

    int count = removeDuplicates(arr, n);

    cout << count << endl; 
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}