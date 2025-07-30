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
        
        if (head == nullptr) return nullptr;

        ListNode* dummyHead = new ListNode(0, head);
        dummyHead->next = head;

        ListNode* curNode = dummyHead;

        while (curNode->next != nullptr)
        {
            if (curNode->next->val == val)
            {
                ListNode* nodeToDelete = curNode->next;
                curNode->next = nodeToDelete->next;
                delete(nodeToDelete);
            }
            else
                curNode = curNode->next;
        }

        ListNode* ret = dummyHead->next;
        delete(dummyHead);

        return ret;

    }
};