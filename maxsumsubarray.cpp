#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < arr.size(); i++) {
        currentSum += arr[i];
        if(currentSum < 0) {
            currentSum = 0;
        }
        
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }

        
    }

    return maxSum;
}

int main() {
    vector<int> arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    cout << "Maximum subarray sum: " << maxSubarraySum(arr) << endl;
    return 0;
}
