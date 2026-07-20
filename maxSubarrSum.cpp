#include<iostream>
#include <climits>
using  namespace std;

//using brute force approach
void maxSubarrSum(int arr[], int n) {
    int max_sum = INT_MIN;

    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            int currSum = 0;
            
            for(int i = start; i <= end; i++) {
                currSum += arr[i];
            }

            cout << currSum << ",";
            max_sum = max(max_sum, currSum);
        }

        cout << endl;
    }

    cout << "Max Subarray Sum: " << max_sum << endl;
}

// slightly optimized
void maxSubarrSum2(int arr[], int n) {
    int max_sum = INT_MIN;

    for(int start = 0; start < n; start++)  {
        int curren_sum = 0;
        for(int end = start; end < n; end++) {
            curren_sum += arr[end];

            max_sum = max(curren_sum, max_sum);
        }   
    }

    cout << "Max subarray sum: " << max_sum << endl;
}

// using kadane's alg
void maxSubarrSum3(int arr[], int n) {
    int max_sum = INT_MIN;
    int current_sum =  0;

    for(int i = 0; i < n; i++) {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum < 0) {
            current_sum = 0;
        }
    }

    cout << "Maximum Subarray Sum: "<< max_sum << endl;
}

int main() {
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);

    maxSubarrSum3(a, n);

    return 0;
}
