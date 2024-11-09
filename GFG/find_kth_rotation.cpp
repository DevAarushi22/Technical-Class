/*
Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
After 1st Rotation : [9, 2, 4, 6]
After 2nd Rotation : [6, 9, 2, 4]
link: https://www.geeksforgeeks.org/problems/rotation4723/1 
*/

int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int start= 0;
        int end= n-1;
        while(start<=end){
            int mid = start + (end-start/2);
            int next = (mid +1)% n;
            int prev = (mid +n-1)%n;
            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
                return mid;
            }
            else{
                if (arr[0] <= arr[mid]){
                    start = mid+1;
                }
                else if (arr[mid]<=arr[n-1])
                end = mid-1;
                }
            }
            return 0;
        }