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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//          ListNode  *list3= NULL;
//          ListNode  *p1= list1;
//          ListNode  *p2= list2;
//          ListNode  *p3= list3;
//          if(p1==NULL) return p2;
//          if(p2==NULL) return p1;
//           if(p1->val<p2->val){
//               list3= p1 ;
//                p1= p1->next;
               
//           }
//          else{
//              list3 = p2;
//              p2= p2->next;
             
//          }
//          p3 = list3;
//          while(p1!=NULL and p2!=NULL){
//              if(p1->val<p2->val){
//                  p3->next= p1;
//                  p1=p1->next;
//                  p3= p3->next;
//              }
//               else {
//                   p3->next= p2;
//                   p2= p2->next;
//                   p3= p3->next;
//               }
//          }
//          if(p1) p3->next= p1;
//          if(p2) p3->next = p2;
//          return list3;
        ListNode* list3 = NULL;
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        ListNode* p3 = list3;
        
        if( p1 ==NULL) return p2; 
        if( p2 == NULL) return p1 ; 
        
         if(p1-> val < p2->val){
             p3 = p1;
             p1 = p1->next; 
             
         }
         else {
             p3 = p2 ; 
             p2 =p2->next;
         }
         list3 = p3 ; 
        
        while( p1!=nullptr && p2 !=nullptr){
            
              if( p1->val < p2->val){
                   p3->next=p1;
                  p1 = p1->next;
                   p3=p3->next;
              }
             else {
                 p3->next = p2 ; 
                 p2 = p2->next ; 
                 p3 = p3->next;
             }
        }
         if(p1)p3->next =p1 ;
         if(p2) p3->next= p2;
          
         return list3;
        
        
    }
};