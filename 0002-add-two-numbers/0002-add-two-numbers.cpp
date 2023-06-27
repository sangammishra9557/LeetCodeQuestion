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
        
        
        
        int carry = 0 ; 
         ListNode * curr1 = l1 , *curr2 = l2;
         ListNode * dummy = new ListNode(-1);
           ListNode * current = dummy ;
        while (curr1!= NULL && curr2 != NULL){
             int sum = (curr1->val + curr2->val) + carry ; 
              carry = sum / 10 ; 
              current-> next = new ListNode(sum%10);
              curr1 = curr1->next; 
              curr2 = curr2->next ; 
              current = current -> next;
             
        }
          while( curr1 != NULL){
               int sum = curr1->val +carry;
                carry = sum/10;
                current->next = new ListNode(sum%10);
                 curr1= curr1->next;
                 current= current->next;
          }
           while( curr2 != NULL){
                int sum = curr2->val + carry ;
                 carry = sum/10;
                 current->next = new ListNode(sum%10);
                 curr2= curr2->next;
                 current = current->next;
                 
           }
          if( carry) current ->next = new ListNode(carry);
         return dummy->next;
        
    }
};