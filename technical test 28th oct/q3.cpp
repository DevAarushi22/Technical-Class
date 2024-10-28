/*
Count Number of Nice Subarrays 1

Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

Return the number of nice sub-arrays.

Input Format:

The first line contains an integer

n, the number of elements in the array nums. The second line contains

n space-separated integers, representing the elements of the array. The third line contains an integer k, representing the number of odd numbers each nice subarray must contain.

Constraints:

1 <= nums.length <= 50000 1 <= nums[i] <= 10^5 1 <= k <= nums.length

Output Format

Output a single integer, representing the number of nice subarrays.
 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int niceSubarrays(vector<int>& nums, int k){
    int n = nums.size();
    int l=0, r=0, count=0, odd=0, result=0;
    
    while (r<n){
        if (nums[r] % 2 != 0){
            odd++;
            count=0;
        }
        
        while(odd == k){
            count++;
            if (nums[l] % 2 != 0) odd--;
            l++;
        }
        
        result += count;
        r++;
    }
    
return result;
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
    
    int result = niceSubarrays(nums, k);
    cout<< result;
    
    return 0;
}