class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        
        // 1. Find the middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // 2. Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* cur = slow->next; // Fixed: added '*' to cur
        slow->next = nullptr;        // Fixed: changed slow.next to slow->next

        while (cur) {
            ListNode* a = cur->next;
            cur->next = prev;
            prev = cur;
            cur = a;
        }
        
        // 3. Interleave the first half and reversed second half
        ListNode* f = head;
        ListNode* s = prev;

        while (s) {
            ListNode* t = f->next; // Fixed: changed f.next to f->next
            ListNode* y = s->next; // Fixed: changed s.next to s->next
            f->next = s;
            s->next = t;
            f = t;
            s = y;
        }
    }
};