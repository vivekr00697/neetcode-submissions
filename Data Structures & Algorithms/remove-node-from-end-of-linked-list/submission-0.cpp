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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        if(length==n){
            ListNode* del1=head;
            head=head->next;
            delete del1;
            return head;
        }
        temp=head;
        int steps=length-n-1;
        while(steps--){
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};
