/* PROBLEM 852. Peak Index in a Mountain Array (Medium, Binary search technique)

You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0,e=n-1;
        
        while(s<e)
        {
             int mid=s+(e-s)/2;

             if(arr[mid]>arr[mid+1])
             e=mid;

             else
             s=mid+1;
        }
        return s;
    }
};

int main() {

int nums[] = {0,1,0};

    int ans = (nums);
    cout<< "Answer is: "<< ans<<endl;

    return 0;
}