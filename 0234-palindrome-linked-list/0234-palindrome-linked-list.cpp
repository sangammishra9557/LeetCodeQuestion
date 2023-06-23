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
    
     void  traverse(ListNode * current){
         
            while(current != NULL) {
                cout<< current->val<<" ";
                current = current->next;
            }
         cout<<endl;
     }
    bool isPalindrome(ListNode* head) {
              if( head->next ==NULL) return true;
        ListNode * slow= head , * fast= head ;
         
        while(fast != NULL && fast->next != NULL){
            slow = slow->next ; 
            fast = fast->next->next; 
        }
         
//   agr na bhi kro ge toh bhi chlega 1 bht deep point hai  ki apne slow se phle prev ka link nhin change kiya hai toh woh htega nhin  toh 1 2 3 3 2 1 aise ho jayegi list 
        // yhn pe apko check krna pdeg ki khin odd toh nhin hai agr odd hai toh beech wala element common hga 
           cout<<slow->val<<" hi\n";
          if(fast != NULL && fast->next == NULL)slow =slow->next;
//traverse(head);
        ListNode * current = slow;
        ListNode* prev = NULL, * next = NULL;
        cout<<slow->val<<" hi\n";
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
         
        traverse(prev);
        current = prev;
         while(head != NULL &&  current != NULL){
              if( head->val != current->val ) return false; 
               head = head->next ; 
               current = current ->next; 
         }
         return true ; 
        
    }
};