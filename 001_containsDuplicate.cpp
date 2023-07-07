#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // using map
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int, int> seen;
       for (auto num : nums) {
           if (seen[num] >= 1)
                return true;
            seen[num]++;
       }
       return false;
    }
};





/*
// using sets
 bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;        
    for (int num : nums) {
        if (seen.count(num) > 0) //checking if element is present
            return true;
        seen.insert(num);
    }
    return false;
}

// using sorting
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i+1]) return true;
    }
    return false;
}

//using two for loops -> brurte force
bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) return true;
        }
    }
    return false;
}

*/