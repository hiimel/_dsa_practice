#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0, right = s.size() - 1;

    while(left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    string str;
    cin >> str;

    vector<char> s(str.begin(), str.end());

    reverseString(s);

    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }

    cout << endl;

    return 0;
}