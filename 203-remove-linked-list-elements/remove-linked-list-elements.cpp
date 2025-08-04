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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode*prev=NULL;
       ListNode * curr=head;
       while(curr)
       {
           if(curr==head && curr->val==val)
           { head=head->next;}
            else if (curr->val==val)
            {
                    prev->next=curr->next;
                    if(curr->next==NULL) break;
                    curr=curr->next;
                    while(curr->val==val)
                    {
                    prev->next=curr->next;
                    if(curr->next==NULL) break;
                    curr=curr->next;
                    }
            }
            prev=curr;
            curr=curr->next;
       }
       return head;
    }
};