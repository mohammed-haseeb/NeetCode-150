#include <bits/stdc++.h>
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
    // Iterative (Using three pointers)
    // TC -> O(n), S.C -> O(1)
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr != NULL) {
            ListNode *nxt = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
};

/*
TC -> O(n), S.C -> O(n), due to stack space
// Recursive
ListNode* reverseList(ListNode* head) {
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    ListNode *newHead = reverseList(head -> next);

    head -> next -> next = head;
    head -> next = NULL;
    return newHead;
    
}
*/