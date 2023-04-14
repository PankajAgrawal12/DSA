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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *slow=head,*fast=head;
       int len=1;
         if(head == NULL||head->next == NULL||k == 0) return head;
        while(fast->next!=NULL)
        {
            fast=fast->next;
            len++;
        }
        fast->next=head;
        k=k%len;
        int end=len-k;
        while(end--)
            fast=fast->next;
        
        head=fast->next;
        fast->next=NULL;
        return head;
    }
};