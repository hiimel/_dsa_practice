#include <bits/stdc++.h>
using namespace std;

void convertDecimal(string n) {
    long long decimalNumber = 0;
    long long power = 1;
    for(int i = n.length() - 1; i >= 0; i--) {
        if(n[i] == '1') {
            decimalNumber += power;
        }

        power *= 2;
    }

    cout << decimalNumber << endl;
}

int main() {
    string binaryNumber;
    cin >> binaryNumber;

   convertDecimal(binaryNumber);
   return 0;
}