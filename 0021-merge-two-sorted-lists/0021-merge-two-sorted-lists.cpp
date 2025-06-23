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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummyHead = new ListNode();
        ListNode* current = dummyHead;

        while (list1 != nullptr || list2 != nullptr)
        {
            int v1 = 101, v2 = 101;

            if (list1 != nullptr) v1 = list1->val;
            if (list2 != nullptr) v2 = list2->val;

            current->next = new ListNode(v1 < v2 ? v1 : v2);
            current = current->next;

            if (v1 < v2) list1 = list1->next;
            else list2 = list2->next;
        }

        ListNode* ret = dummyHead->next;
        delete(dummyHead);

        return ret;
    }
};