/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
         ListNode * curr = headA;
         ListNode * current = headB;
          
         while(curr != current){
            
             if(curr == NULL) curr = headB;
             else curr = curr->next;
             if(current== NULL) current = headA;
             else current = current->next;
          
         }
         return curr;
        
    }
};