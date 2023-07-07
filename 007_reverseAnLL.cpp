#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    // Iterative
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