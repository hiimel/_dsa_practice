#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n];
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int arr2[m];
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int mergedArray[100];
    int idx = 0;

    for(int i = 0; i < n; i++) {
        mergedArray[idx] = arr1[i];
        idx++;
    }

    for(int i = 0; i < m; i++) {
        mergedArray[idx++] = arr2[i];
    }

    for(int i = 0; i < n + m; i++) {
        cout << mergedArray[i] << " ";
    }

    cout << endl;
    return 0;
}