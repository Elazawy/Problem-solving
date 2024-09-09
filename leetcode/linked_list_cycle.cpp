// Problem name : Linked List Cycle
// URL : https://leetcode.com/problems/linked-list-cycle/description/
// Date: Mon Sep 9 2024 


#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        while(fast && fast->next){
            head = head->next;
            fast = fast->next->next;
            if(head == fast){
                return true;
            }
        }
        return false;
    }
};