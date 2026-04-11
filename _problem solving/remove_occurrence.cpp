#include <bits/stdc++.h>
using namespace std;

int removeAllOccurrences(vector<int> &arr, int n, int el) {
    int left = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != el) {
            arr[left] = arr[i];
            left++;
        }
    }
    
    return left;  
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int element;
        cin >> element;
    
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = removeAllOccurrences(arr, n, element);
        for(int i = 0; i < result; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}