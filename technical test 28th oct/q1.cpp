/*Number of good pairs

Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Input Format

The first line contains a single integer,

n, the number of elements in the array. The second line contains

n space-separated integers, representing the elements of the array nums.

Constraints

1 <= nums.length <= 100 1 <= nums[i] <= 100

Output Format

Output a single integer: the number of good pairs. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>

using namespace std;

int goodPairs(vector<int>& nums){
    set<pair<int,int>> seen;
    int count=0;
    
    for(int i=0; i< nums.size(); i++){
        for (auto& p : seen){
            if (p.first ==nums[i]){
                count++;
            }
        }
        seen.insert({nums[i], i});
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>> n;
    vector<int> nums(n);
    
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int result = goodPairs(nums);
    cout<< result;
    
    return 0;
}
