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
        ListNode* start = head;
        ListNode* res = head;
        int count = 0;

       for(int i = 0; i < n; i++)
       {
           start = start->next;
       }
        if(start == NULL)
        {
            return head->next;
        }

        while(start->next != NULL)
        {
            start = start->next;
            res = res->next;
        }
        res->next = res->next->next;

        return head;
    }
};
