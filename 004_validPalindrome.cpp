#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end) {
            // from starting, move forward and skip that round if any non-alphanumeric
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            // from ending, move forward and skip that round if any non-alphanumeric
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            // compare each char from start and end, if any char not same, return false, else, keep increasing from start and decresing from end
            if (tolower(s[start]) != tolower(s[end])) {
                return false;  
            } else {
                start++;
                end--;
            }
        }
        // reaching here means start crossed each other, i.e. it is a palidrome
        return true;
    }
};





/*
// using two pointers, but extra O(s) space for the string
    string removeChar(string s) {
        int n = s.size();
        string str = "";

        transform(s.begin(), s.end(), s.begin(), :: tolower); // O(s) to convert all chars to lower
        for (int i = 0; i < n; i++) { // O(s) to loop through entire string
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >='a' && s[i] <= 'z') || (s[i] >='0' && s[i] <= '9')) {
                str += s[i];
            }
        }
        return str;
    }
    
    bool isPalindrome(string s) {
        
        string str = removeChar(s);
        int low = 0;
        int high = str.size() - 1;
        
        while (low <= high) { // O(s/2) -> since both low & high moving and in half time will reach middle(if palindrome)
            if (str[low] == str[high]) {
                low++;
                high--;
            } else {
                return false;
            }
        }
        return true;
    }
*/