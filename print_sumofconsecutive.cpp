#include <iostream>
#include <vector>
using namespace std;

void print_sumofConsecutive(int n) {
    for(int start = 1; start < n; start++) {
        int sum = 0;
        vector<int> values;

        for(int i = start; i < n;  i++)  {
            sum += i;
            values.push_back(i);

            if(sum == n && values.size() > 1) {
                for(int k = 0; k < values.size(); k++) {
                    cout << values[k];

                    if(k < values.size() - 1) {
                        cout << " + ";
                    }
                }

                cout << endl;
                break;
            }

            if(sum > n)  {
                break;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    print_sumofConsecutive(n);

    return 0;
}