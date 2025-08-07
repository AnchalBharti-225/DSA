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
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // S.C =o(m+n)
        // ListNode *tempA=list1;
        // ListNode *tempB=list2;
        // ListNode *c=new ListNode(100);
        // ListNode * tempC=c;
        // while(tempA!=NULL && tempB!=NULL)
        // {
        //      if(tempA->val<=tempB->val)
        //      {
        //          ListNode *t=new ListNode(tempA->val);
        //          tempC->next=t;
        //          tempC=t;
        //          tempA=tempA->next;
        //      }
        //      else
        //      {
        //          ListNode * t=new ListNode(tempB->val);
        //          tempC->next=t;
        //          tempC=t;
        //          tempB=tempB->next;
        //      }
        // }
        // if(tempA==NULL) {tempC->next=tempB;}
        // else
        // {tempC->next=tempA;}
        // return c->next;
        //S.C=O(1)
        ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode *c=new ListNode(100);
        ListNode *temp=c;
        while(a!=NULL && b!=NULL)
        {
              if(a->val <=  b->val)
              {
                    temp->next=a;
                    a=a->next;
                    temp=temp->next;
              }
              else
              {
                  temp->next=b;
                  b=b->next;
                  temp=temp->next;
              }
        }
        if(a!=NULL){ temp->next=a;}
        else
        {temp->next=b;}
        return c->next;
    }
};