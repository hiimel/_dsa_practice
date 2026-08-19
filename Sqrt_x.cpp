// Link: https://leetcode.com/problems/sqrtx/?envType=problem-list-v2&envId=binary-search

#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    int left = 1;
    int right = x;
    int ans = 0;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(mid <= x / mid) {
            ans = mid;
            left = mid + 1;
        }  else {
            right = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int x;
    cin >> x;

    cout << mySqrt(x) << endl;

    return 0;
}