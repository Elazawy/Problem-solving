// problem name : Merge two sorted list
// url : https://leetcode.com/problems/merge-two-sorted-lists/
// Date : THU Sep  10 2024 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) {
            return list2;
        } 
        else if(list2 == NULL) {
            return list1;
        }
        ListNode* start;
        ListNode* current_1;
        ListNode* current_2;
        if(list1->val < list2->val){
            start = list1;
            current_1 = list1->next;
            current_2 = list2;
        } else {
            start = list2;
            current_2 = list2->next;
            current_1 = list1;
        }
        ListNode* head = start;
        while(current_1 != NULL && current_2 !=NULL){
            if(current_1->val < current_2->val){
                start->next = current_1;
                current_1 = current_1->next;
            } else {
                start->next = current_2;
                current_2 = current_2->next;
            }
            start = start->next;
        }
        if(current_1 == NULL ){
            start->next = current_2;
        }
        else {
            start->next = current_1;
        }
        return head;
    }
};
