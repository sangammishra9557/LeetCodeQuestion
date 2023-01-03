class Solution {
public:
    string getHint(string secret, string guess) {
     unordered_map<char ,int> mp ; 
      for(auto it: secret) mp[it]++;
     
      int a = 0 , b = 0; 
        
        
        
        for( int i =0 ;i<guess.size();i++){
            if(guess[i] == secret[i]){
                a++;
                mp[guess[i]]--;
                if(mp.count(guess[i]) == 0) mp.erase(guess[i]);
            }
        }
        
        cout<<"initially the count of 1 is" <<mp.count('1')<<endl;
        for(int i =0; i<guess.size();i++){
            cout<<"abcd"<<mp.count(guess[i])<<endl;
            if(guess[i] != secret[i] && mp[guess[i]]){
                mp[guess[i]]--;
                b++;
               cout<<mp[guess[i]];
                cout<<endl;
                cout<<"xx"<<mp[guess[i]]<<" "<<mp.count(guess[i])<<endl;
                if(mp[guess[i]] == 0) mp.erase(guess[i]);
            
            }
        }
        
        
        
        string temp = to_string(a)+"A"+to_string(b)+"B";
        return temp ; 
      }
        

};