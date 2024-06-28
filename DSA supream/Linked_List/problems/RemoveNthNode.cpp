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

//      int findthelength(ListNode* head){
//         ListNode* temp = head;
//         int count = 0;
//         while(temp != NULL){
//           count++;
//           temp = temp->next;

//         }
//         return count;
//      }
      
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len  = findthelength(head);
//         int NodetoDelete = len - n + 1;
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         int counter = 1;

//         if(NodetoDelete == 1){
//             ListNode* temp = head;
//             head = head->next;
//             delete temp;
//             return head;
//         }

//         while(counter < NodetoDelete){
//             prev = curr;
//             curr = curr->next;
//             counter++;
//         }
       
//        if(curr->next != NULL){
//         prev->next = curr->next;
//         curr->next = NULL;
//        }else{
//         prev->next =NULL;
//        }

//        delete curr;

//         return head;
//     }
// };