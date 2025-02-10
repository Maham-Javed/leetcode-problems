// PROBLEM # 704: BINARY SEARCH 
// Given an array of integers nums which is sorted in ascending order,
// and an integer target, write a function to search target in nums.
// If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (target == nums[mid])
      return mid;

    if (target > nums[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
    }
};

int main() {

int nums[] = {-1,0,3,5,9,12};
int target = 19;

    int ans = (nums, target);
    cout<< "Answer is: "<< ans<<endl;

    return 0;
}