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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        ListNode *temp3=NULL;
        int len=0;
        for(int i=1;i<a;i++)
        {
             temp1=temp1->next;
        }
        temp3=temp1->next;
        temp1->next=temp2;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        for(int i=1;i<=(b-a);i++)
        {
             temp3=temp3->next;
        }
        temp2->next=temp3->next;
        return list1;
    }
};