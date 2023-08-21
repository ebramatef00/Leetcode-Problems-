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
// Definition for singly-linked list.

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode * dummy=new ListNode();
       ListNode * nptr=dummy;

       while(list1 && list2)
       {
           if(list1->val > list2->val)
           {
               nptr->next=list2;
               list2=list2->next;
           }
           else
           {
               nptr->next=list1;
               list1=list1->next;
           }
          nptr=nptr->next;

       }
       if (list1) {
            nptr->next = list1;
        } else if (list2) {
            nptr->next = list2;
        }
 ListNode* mergedList = dummy->next;
        delete dummy;
        return mergedList;
    }
};
