#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;

    for(int i =  0; i < n; i++) {
        if(arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    vector<int> values;
    int i = 0, j = 0;

    while(i < pos.size() && j < neg.size()) {
        values.push_back(pos[i]);
        values.push_back(neg[j]);
        i++;
        j++;
    }

    while(i < pos.size()) {
        values.push_back(pos[i]);
        i++;
    }

    while(j < neg.size()) {
        values.push_back(neg[j]);
        j++;
    }

    for(int x: values) {
        cout << x << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    return 0;
}