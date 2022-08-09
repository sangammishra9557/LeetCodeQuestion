struct Node {
    
     Node * links[26] = {NULL};
     bool end = false;
};


class Solution {
public:
    
    
    
    
     void insert( Node  * root ,  string word){
           Node *  current = root ; 
           for(int i  = 0 ; i<word.size() ; i++){
                int index = word[i] - 'a'; 
                if(current->links[index] == NULL)
                     current->links[index] = new Node ; 
               current= current->links[index];
           }
          current ->end = true ; 
     }
    
    
     vector<string > search( Node * root ,  string & prefix){
         Node * current = root  ; 
          vector<string>    result;
          for(  auto &c :  prefix){
                int index =  c - 'a';
               
               if(current->links[index] == NULL)  return {};
               current = current->links[index];
          }
         
           dfs( current ,  prefix , result);
           
           return result ; 
         
     }
    
     void dfs( Node *   root  ,  string  prefix ,   vector<string> & result ){
          if( result.size()  == 3)  return ; 
          
          if( root-> end)
               result.push_back( prefix);
         
          for(int i = 0 ; i<26 ; i++){
              if( root->links[i])
                   dfs( root->links[i] , prefix + (char)  (i+'a' ) , result);
          }
     }
    
    
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
       vector<vector<string>> ans ;
        Node *root = new Node ; 
        string prefix = "";
         for(  auto it  :  products){
            insert(root ,  it); 
             
         }
         for(auto &c:searchWord){
             prefix.push_back( c);
             ans.push_back(search(root ,  prefix));
         }
        
         return  ans ; 
    }
};