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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        //Base case, if initally empty
        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (list1 && list2) {
            if (list1 -> val <= list2 -> val) {
                tail -> next = list1;
                list1 = list1 -> next;
            } else {
                tail -> next = list2;
                list2 = list2 -> next;
            }
            tail = tail -> next;
        }

        if (list1) {
            tail -> next = list1;
        }

        if (list2) {
            tail -> next = list2;
        }

        return dummy -> next;
    }   
};


/*
// Recursive
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* ptr1 = list1;
    ListNode* ptr2 = list2;
    if(ptr1 == NULL){
        return list2;
    }
    if(ptr2 == NULL){
        return list1;
    }
    if(ptr1->val < ptr2->val){
        ptr1->next = mergeTwoLists(ptr1->next, ptr2);
        return ptr1;
    }
    else{
        ptr2->next = mergeTwoLists(ptr1, ptr2->next);
        return ptr2;
    }
}
*/
