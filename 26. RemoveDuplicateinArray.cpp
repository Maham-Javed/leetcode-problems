#include <iostream>

  int removeDuplicates(int* nums) {
      int n = sizeof(nums) / sizeof(nums[0]);
        int j = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }

int main() {

int nums[] = {1,2,2,1,3,4,4};
    int ans = removeDuplicates(nums);
    cout << "Array Elements: "<<ans;

    return 0;
}