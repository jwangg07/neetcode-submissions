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
        ListNode* dummy = new ListNode();
        ListNode* ans = dummy;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                ListNode* add = list1;
                dummy->next = add;
                dummy = dummy->next;
                list1 = list1->next;                
            } else {
                ListNode* add = list2;
                dummy->next = add;
                dummy = dummy->next;
                list2 = list2->next;
            }
        }
        if (!list1) {
            dummy->next = list2;
        } else {
            dummy->next = list1;
        }
        return ans->next;
    }
};
