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
        int len=0;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            len++;
            cur=cur->next;
        }

        int r=len-n;
        if(r==0) return head->next;

        cur=head;
        for(int i=0;i<len-1;i++)
        {
            if((i+1)==r)
            {
                cur->next=cur->next->next;
                break;
            }
            cur=cur->next;
        }
        return head;
    }
};
