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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode();
        ListNode* currentNode = dummyHead;

        int carry = 0;

        while(l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int v1 = l1 != nullptr ? l1->val : 0;
            int v2 = l2 != nullptr ? l2->val : 0;

            int sum = v1 + v2 + carry;
            
            int newNodeVal = sum % 10;
            carry = sum / 10;

            currentNode->next = new ListNode(newNodeVal);

            currentNode = currentNode->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        ListNode* retNode = dummyHead->next;

        delete dummyHead;

        return retNode;
    }
};