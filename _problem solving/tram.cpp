// Link: https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int passengers = 0;
    int maxCapacity = 0;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        passengers -= a;
        passengers += b;

        maxCapacity = max(maxCapacity, passengers);
    }

    cout << maxCapacity << endl;
    return 0;
}