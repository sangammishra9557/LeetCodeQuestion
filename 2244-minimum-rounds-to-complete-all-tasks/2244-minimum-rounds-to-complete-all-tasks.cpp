class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int> mp; 
      for(auto it : tasks) mp[it]++;
       int round = 0 ;
     for(auto &pair :mp){
          int a = pair.second;
         if(a == 1) return -1;
         if(a%3 == 0)  round+= a/3;
         else  round+= a/3+1;
         
         
     }
     return round;   
    }
};