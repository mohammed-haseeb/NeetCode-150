#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Using hashmaps
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        // count the freq. of characters
        for (auto x : s) {
            count[x]++;
        }

        // Decrement freq. of characters
        for (auto x : t) {
            count[x]--;
        }
     
        //checking if any char has non-zero freq
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
     
        return true;
    }
};



/*
//using Sorting
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t) {
        return true;
    } 
    
    return false; //came out of (s==t) since not equal 
}
*/