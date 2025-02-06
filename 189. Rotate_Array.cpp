//189. ROTATE ARRAY (right-rotate), Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<iostream>
using namespace std;

 void rotate(int nums[], int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }

    int main(){

int nums[] = [1,2,3,4,5,6,7];
int  k = 3

cout<<rotate(nums, k);

        return 0;
    }