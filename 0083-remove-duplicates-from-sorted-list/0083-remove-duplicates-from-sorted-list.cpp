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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyHead = new ListNode(-101);
        ListNode* current = dummyHead;

        while (head != nullptr)
        {
            if (current->val == head->val)
            {
                head = head->next;
                continue;
            }

            current->next = new ListNode(head->val);
            current = current->next;
        }

        current = dummyHead->next;
        delete dummyHead;

        return current;
    }
};