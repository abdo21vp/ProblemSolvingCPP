// Last updated: 11/25/2026, 8:45:34 PM
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1. Dummy node anchors the start; 'tail' builds the list
        ListNode dummy(0); 
        ListNode* tail = &dummy;

        // 2. Compare while BOTH lists still have nodes
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // 3. Advance the builder pointer!
        }

        // 4. Attach whatever is left of the non-empty list in O(1)
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // 5. Skip the dummy node
        return dummy.next;
    }
};