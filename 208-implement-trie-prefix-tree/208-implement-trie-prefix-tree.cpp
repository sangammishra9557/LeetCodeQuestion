


class Trie {

       struct Node{
      Node *links[26];
      bool flag = false;
         
     };
    
   private : Node * root ; 
public:
   

    Trie() {
        root = new Node(); // this will intialize the root node everytime even  when th
    }
    
    void insert(string word) {
        Node *  node = root ; 
          for(int i = 0 ; i< word.size() ; i++){
               int index =   word[i]-'a';
              if( !node-> links[index])
                  node->links[index] = new Node();
               node = node->links[index];
          }
          node->flag = true ; 
    }
    
    bool search(string word) {
         Node *  current = root ; 
         for(int i = 0 ;  i< word.size(); i++){
              int index = word[i] - 'a';
              if(current->links[index] == nullptr)  return false;
              current = current->links[index];
         }
          return   current->flag ; 
        
    }
    
    bool startsWith(string prefix) {
         Node *  current = root ; 
        
        for(int i =0 ; i< prefix.size() ; i++){
              int index =   prefix[i] - 'a';
              if(current->links[index] == nullptr)
                    return false;
             current= current->links[index];
        }
         return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */