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
    ListNode * reverse (ListNode * head , int k , int &gp ,int &group){
       if(head  ==NULL) return NULL;
        ListNode *current = head , * prev = NULL,* next = NULL;
         int i = 0 ;
         while( current !=NULL && i <k){
             next = current->next;
             current->next = prev ;
             prev = current;
             current = next;
              i++;
             
             
         }
        gp++;
            if(next != NULL&& gp<group)
           head->next = reverseKGroup(next , k );
           if(gp == group) head->next = next;
           return prev ; 
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* current = head;
        int cnt = 0 ; 
        while(current != NULL)
        {
            current= current-> next ;
            cnt++;
        }
        
         int group  = cnt/k;
         int gp = 0;
         return reverse( head , k , gp , group);
           
    }
    
};