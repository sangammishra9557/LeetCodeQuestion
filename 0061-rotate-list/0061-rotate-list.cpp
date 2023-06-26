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
          if(!head) return head ;
         int len = 1;
        
        
         ListNode  *curr , *temp;
         curr =head;
         temp = head;
         while(temp->next){
             temp = temp->next;
             len++;
         }
         temp->next=  head;
         k %= len;
         for(int i =0; i<len-k;i++){
             temp = temp->next;
         }
        curr= temp->next;
        temp->next= NULL;
        return curr;
    }
};