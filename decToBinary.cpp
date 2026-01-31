#include <bits/stdc++.h>
using namespace std;

string decToBinary(int n) {
    if(n == 0) {
        return "0";
    }

    string inBinary = "";
    while(n > 0) {
        char bit = (n % 2) + '0';
        inBinary = bit + inBinary;
        n /= 2;
    }

    return inBinary;
}



int main() {
    int n;
    cin >> n;

    cout << decToBinary(n) << endl;
    return 0;
}