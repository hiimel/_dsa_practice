#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int *ptr = arr;

    for(int i = 0; i < n; i++) {
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;
    }

    cout << endl;

    cout << "_using ptr++ : " << endl;
    for(int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;
    return 0;
}