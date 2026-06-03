/*
 * Problem: 25. Reverse Nodes in k-Group
 * Difficulty: Hard
 * Link: https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/2020851390/
 * Language: cpp
 * Date: 2026-06-03
 */

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        for(int i=0; i<k; i++){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
        }
        ListNode* prev=NULL;
        ListNode* curr = head;
        ListNode* nextNode=NULL;
        int count =0;
        while(curr!=NULL && count<k){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            count++;
        }
        if(nextNode!=NULL){
            head->next=reverseKGroup(nextNode, k);
        }
        return prev;
    }
};
