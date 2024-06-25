// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
    
//     int  findlen(ListNode* head){
//         ListNode* temp = head;
//         int len = 0;
//         while(temp != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
//     }

//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head == NULL){
//             return head;
//         }
//         if(head->next == NULL){
//             return head;
//         }
  
//          int len  = findlen(head);
//         if(len < k){
//             return head;
//         }

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* nextNode = NULL;
//         int pos = 0;

//         while(pos < k){
//             nextNode = curr->next;  
//            curr->next = prev;
//            prev = curr;
//            curr = nextNode;
//            pos++;
//             }
        
        
//           ListNode* ans = NULL;

//         if(nextNode != NULL){
           
//            ans =  reverseKGroup(nextNode , k);
//             head->next = ans;
//         }

//         return prev;
//     }
// };