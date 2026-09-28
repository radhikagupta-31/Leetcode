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

    int doubleNumber(ListNode* node) {
        if (node == nullptr)
            return 0;

        int carry = doubleNumber(node->next);

        int value = node->val * 2 + carry;

        node->val = value % 10;

        return value / 10;
    }

    ListNode* doubleIt(ListNode* head) {

        int carry = doubleNumber(head);

        if (carry > 0) {
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head = newNode;
        }

        return head;
    }
};