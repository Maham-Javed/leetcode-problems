/* PROBLEM # 34. Find First and Last Position of Element in Sorted Array (MEDIUM, apply binary serach technique)
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Optimal Approach using Binary Search

        int first = -1, last = -1;
        int left = 0, right = nums.size() - 1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1; // Keep searching in the left half
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Reset pointers to search for last occurrence
        left = 0, right = nums.size() - 1;

        // Find last occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1; // Keep searching in the right half
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};

int main() {

int nums[] = {5,7,7,8,8,10};
int target = 8;

    int ans = (nums, target);
    cout<< "Answer is: "<< ans<<endl;

    return 0;
}