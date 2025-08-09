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
 //Approach I: Recursive
class Solution {
public:
    void reverse(ListNode*& head,ListNode *curr,ListNode * prev)
    {
        //base  case 
        if(curr==NULL){head=prev;return;}
        else
        {ListNode * forward=curr->next;
        curr->next=prev;
        reverse(head,forward,curr);}
    }
    ListNode* reverseList(ListNode* &head) {
      if(head==NULL || head->next==NULL)
      {
             return head;
      }
      else
      {
          ListNode * prev=NULL;
          ListNode * curr=head;
          reverse(head,curr,prev);
          return  head;
      }
    }
};
// Approach II: Iterative
// class Solution
// {
//     public:
//       ListNode * getATidx(ListNode * &head,int idx)
//       {
//          ListNode * temp=head;
//          for(int i=1;i<=idx;i++)
//          {
//              temp=temp->next;
//          }  
//          return temp;
//       }
//       ListNode * reverseList(ListNode * &head)
//       {
//                ListNode *temp=head;
//                int n=0;
//                while(temp)
//                {
//                  n++;
//                  temp=temp->next;
                 
//                }
//                int i=0;
//                int j=n-1;
//                while(i<j)
//                {
//                  ListNode * left=getATidx(head,i);
//                  ListNode * right=getATidx(head,j);
//                  int t=left->val;
//                  left->val=right->val;
//                  right->val=t;
//                  i++;
//                  j--;
//                }
//                return head;
//       }
// };