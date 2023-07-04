#include<bits/stdc++.h>
using namespace std;
/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/


// Brute Force 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto it:nums) mp[it]++;

       for(auto it:mp){
           if(it.second==1){
            return it.first;
            break;
           }
       } 
       return 0;
    }
};
/*Optimal Approach*/
int singleNumber(vector<int>& nums) {
       int a=0,b=0;
       for(int i=0;i<nums.size();i++){
           a = (a^nums[i]) & ~b;
           b = (b^nums[i]) & ~a;
       }
       return a;
    }