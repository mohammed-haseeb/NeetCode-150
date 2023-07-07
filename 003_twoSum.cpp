#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //using hashmaps, count() is to check if the element present or not
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> map;
       int n = nums.size();

       for (int i = 0; i < n; i++) {
        int diff = target - nums[i];
        if (map.count(diff)) { //count() checks if element present(1) or not(0)
            return {map[diff], i};
        }
        map[nums[i]] = i;
       }
    }
};


/*
//using two for loops
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i,j}; // solution found
            }
        }
    }
    return {}; //no solution found
}

*/