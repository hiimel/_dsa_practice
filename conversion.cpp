#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int convert(int n) {
    int ans = 0;
    int pow = 1;

    while(n > 0) {
        int remainder = n % 2;
        n /= 2;
        ans += (remainder * pow);
        pow = pow * 10;
    }

    return ans;
}

string convert2(int n) {
    if(n == 0) {
        return "0";
    }

    string ans = "";
    while(n > 0) {
        ans += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

void decimaltoBinary (int n) {
    if(n > 1) {
        decimaltoBinary(n / 2);
    }

    cout << n % 2;
}

int BinarytoDecimal(int n) {
    int ans = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 10;
        ans += rem * pow;
        n /= 10;
        pow *= 2;
    }

    return ans;
}

int main() {

    for(int i = 1; i <= 10; i++) {
        cout << convert2(i) << endl;
    }

    return 0;
}