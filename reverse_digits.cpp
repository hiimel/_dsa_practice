#include <bits/stdc++.h>
using namespace std;

long long reverseDigits(long long n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    n = stoi(s);
    return n;
}

int main() {
    long long n;
    cin >> n;

    cout << reverseDigits(n) << endl;
    return 0;
}