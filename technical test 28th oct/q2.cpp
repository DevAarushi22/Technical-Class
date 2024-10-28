/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Input Format

The first line contains an integer

n, the number of elements in the array nums. The second line contains

n space-separated integers, representing the elements of the array. The third line contains a single integer, k, the target sum for the subarrays.

Constraints

1 <= nums.length <= 2 * 104 -1000 <= nums[i] <= 1000 -107 <= k <= 107

Output Format

Output a single integer, representing the total number of subarrays whose sum is equal to k.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int SumOfSubarrays(vector<int>& nums, int k){
    int presum = 0;
    int count = 0;
    unordered_map<int,int> mp;
    mp[0]=1;
    
    for(int i =0; i<nums.size(); i++){
        presum= presum + nums[i];
        
        if (mp.find(presum - k) != mp.end()){
            count += mp[presum - k];
        }
        mp[presum]++;
    }
    
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
int n,k;
    cin>>n;
    vector<int> nums(n);
    
    for (int i=0; i<n; i++){
        cin>> nums[i];
    }
    cin>> k;
    
    int result = SumOfSubarrays(nums, k);
    cout<< result;
return 0;
}