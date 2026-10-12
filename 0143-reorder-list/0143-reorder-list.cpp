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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead=reverseList(head->next);
        ListNode* front=head->next;
        front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
    void reorderList(ListNode* head) {
        if(!head or !head->next) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL;
        mid=reverseList(mid);
        ListNode* first=head;
        while(mid){
            ListNode* next1 = first->next;
            ListNode* next2 = mid->next;
            first->next = mid;
            mid->next = next1;
            first = next1;
            mid = next2;
        }
    }
};