// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int carry = 0;
//         ListNode* t1 = l1;
//         ListNode* t2 = l2;
        
//         ListNode* head = new ListNode(); // Dummy node
//         ListNode* temp = head;
        
//         while (t1 != nullptr || t2 != nullptr || carry != 0) {
//             int val1 = (t1 != nullptr) ? t1->val : 0;
//             int val2 = (t2 != nullptr) ? t2->val : 0;
//             int sum = val1 + val2 + carry;
            
//             carry = sum / 10;
//             int digit = sum % 10;
            
//             ListNode* newNode = new ListNode(digit);
//             temp->next = newNode;
//             temp = temp->next;
            
//             if (t1 != nullptr) t1 = t1->next;
//             if (t2 != nullptr) t2 = t2->next;
//         }
        
//         return head->next; // Skip the dummy node
//     }
// };
