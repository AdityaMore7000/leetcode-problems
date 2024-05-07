class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        ListNode* curr = head;
        ListNode* prev = nullptr;
             while (curr != nullptr) {
            int twiceOfVal = curr->val * 2;
            if (twiceOfVal < 10) {
                curr->val = twiceOfVal;
            } 
             else if (prev != nullptr) {
                 curr->val = twiceOfVal % 10;
                prev->val = prev->val + 1;
            } else {
                head = new ListNode(1, curr);
                curr->val = twiceOfVal % 10;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};