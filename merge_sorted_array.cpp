//Link: https://leetcode.com/problems/merge-sorted-array/description/?envType=problem-list-v2&envId=sorting

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx = m + n - 1;
    int i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx] = A[i];
            idx--;
            i--;
        } else {
            A[idx] = B[j];
            idx--;
            j--;
        }
    }

    while(j >= 0) {
        A[idx] = B[j];
        idx--;
        j--;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> arr1(a + b), arr2(b);
    for(int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    merge(arr1, a, arr2, b);

    for(int x: arr1) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}