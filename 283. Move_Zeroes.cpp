// PROBLEM # 283: MOVE ZEROES
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {

int nums[] = {0,1,0,3,12};
    moveZeroes(nums);

    return 0;
}