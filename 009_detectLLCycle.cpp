#include<bits/stdc++.h>
using namespace std;

/****************************************************************/
class ListNode {
    public:
    int val;
    ListNode *next;

    ListNode (int val) {
        this -> val = val;
        next = NULL;
    }
};
/****************************************************************/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;

            if (slow == fast) {
                return true; // cycle exists
            }
        }
        return false; //no cycle
    }
};
