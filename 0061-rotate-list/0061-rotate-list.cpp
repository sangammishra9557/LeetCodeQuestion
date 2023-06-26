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
    ListNode* rotateRight(ListNode* head, int k) {
         if( head == NULL || k ==0) return head ;
        int len = 0 ; 
         
        ListNode * current =  head ; 
        while( current != NULL){
             current= current-> next ; 
             len++;
        }
        
           k = k%len;
        if (len == k || k==0) return head;
        current = head ;
       
        cout<<k;
         int  ln =  len - k-1 ;
    
        for( int i =0 ; i < ln ; i++){
            current = current->next; 
        }
          
        ListNode * next = current->next; 
          cout<< current->val;
        current->next  = NULL;
        
      
        current = next;
         while(current->next != NULL){
              current = current->next ; 
         }
         current->next = head ; 
         return next; 
        
    }
};