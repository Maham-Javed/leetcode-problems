/* PROBLEM # 2951. Find the Peaks (Easy)

You are given a 0-indexed array mountain. Your task is to find all the peaks in the mountain array.
Return an array that consists of indices of peaks in the given array in any order.
Notes:
A peak is defined as an element that is strictly greater than its neighboring elements.
The first and last elements of the array are not a peak.
*/

/*
Approach:
Traverse the array starting from the second element and stopping at the second-to-last element.
For each element, compare it with its previous and next elements.
If the current element is greater than both its neighbors, record its index as a peak.
Return the list of indices representing the peaks.
*/

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
                vector<int>peaks;
        int n=mountain.size();
        for(int i=1;i<n-1;i++){
            if(mountain[i]>mountain[i-1]&& mountain[i]>mountain[i+1]){
                peaks.push_back(i);
            }
        }
        return peaks;

    }
};