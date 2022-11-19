//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  unordered_map<Node *  , Node *> mp;
  int minTime(Node* root, int target) 
    {
        Node * tar = createMapping(root , target);
    
      return burnTree(tar);     
    }
    
    
        Node * createMapping(Node * root , int target){
            
            mp[root] =NULL;
            queue<Node *> q ;
            q.push(root);
            Node * tar = NULL;
            while(!q.empty()){
                
                auto node = q.front();
                
                q.pop();
                if(node->data == target) tar = node;
                if(node->left){
                    mp[node->left] = node ; 
                    q.push(node->left);
                }
                if(node->right)
                 {mp[node->right] = node ;
                 q.push(node->right);
                 }
                 
                
            }
            return tar;
            
        }
        int burnTree(Node * root ){
            unordered_map<Node *, bool> visited ; 
            visited[root] = 1; 
            queue<Node *> q; 
            q.push(root);
            visited[root] = 1 ; 
            int timer = 0 ; 
            int flag ;
            while(! q.empty()){
                int s = q.size();

                 flag = 0 ;
        
                for(int i = 0  ; i<s ; i++){
                    auto node = q.front();
                  
                    q.pop();
                    if(node->left   && !visited[node->left]){
                  
                        q.push(node->left);
                        visited[node->left] = true;
                        flag = 1 ; 
                    }
                    if(node->right && !visited[node->right]){
                        visited[node->right] = true;
                       
                        q.push(node->right);
                        flag = 1; 
                    }
                    if(mp[node]  && !visited[mp[node]]){
                        
                        q.push(mp[node]);
                        visited[mp[node]] = true ;
                        flag = 1;
                    }
                }
            
                if(flag ==1 )timer++;
               
            }
        
            return timer ; 
        }
    
    
    
    
    
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends