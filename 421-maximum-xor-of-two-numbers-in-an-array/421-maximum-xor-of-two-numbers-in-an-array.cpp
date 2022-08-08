  struct Node{
     Node * links[2];       
  };


class Trie{ 
    public:
     Node * root  ; 
     Trie(){
          root = new Node();
     }
    
     void insert( int num ){
          Node * current = root ; 
          for( int i =  31 ; i>= 0 ; i--){
              int index = (num >> i) &1;
              if( current ->links[index]  == NULL)
                  current->links[index] = new Node();
              current =  current->links[index];
          }
     }
     int getmax( int num){
           Node * current = root ; 
           int max = 0 ; 
           for(int i = 31 ; i>= 0 ; i--){
                 int index =   (num >> i) &1;
                 if(current->links[1- index] != NULL){
                        max = max|  1<<i;
                       current = current->links[1-index];
                 } 
                 else    current = current->links[index];
                
           }
          return max ; 
     }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
           Trie   trie ; 
            for( auto &it : nums){
                 trie.insert(it);
            }
          int maxi =  0 ; 
           for( auto &it : nums){
                maxi = max(maxi ,  trie.getmax(it));
           }
          return maxi ;
    }
};