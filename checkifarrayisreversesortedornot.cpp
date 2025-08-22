#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        // In a rotated sorted array, there should be at most one place
        // where the previous element is greater than the next.
        int n = nums.size();
        int count = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }

        // Check the last-to-first transition
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        return count <= 1;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    vector<int> nums3 = {1, 2, 3};

    cout << boolalpha; // print true/false instead of 1/0
    cout << "Check nums1: " << sol.check(nums1) << endl; // true
    cout << "Check nums2: " << sol.check(nums2) << endl; // false
    cout << "Check nums3: " << sol.check(nums3) << endl; // true

    return 0;
}
