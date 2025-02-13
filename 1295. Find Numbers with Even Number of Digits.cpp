/* PROBLEM # 1295. Find Numbers with Even Number of Digits
Given an array nums of integers, return how many of them contain an even number of digits.
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evensum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            int count =0;
            while(nums[i] != 0){
                nums[i] = nums[i]/10;
                count++;
            }
            if(count % 2 == 0){
                evensum++;
            }
        }
        return evensum;
        
    }
};