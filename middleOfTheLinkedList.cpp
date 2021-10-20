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
    ListNode* middleNode(ListNode* head) {
        ListNode* start = head;
        int count = 0, mid;

        while(start != NULL)
        {
            start = start->next;
            count++;
        }
        mid = count / 2 + 1;
        count = 0;
        while(head != NULL)
        {
            if(count == mid - 1)
            {
                return head;
            }
            head = head->next;
            count++;
        }
        return head;
    }
};
