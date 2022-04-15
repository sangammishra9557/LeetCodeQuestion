class Solution {
public:
    int numRabbits(vector<int>& answers) {
         int ans = 0 ; 
          unordered_map<int , int >  mp ;
            for(auto reportee: answers)
            {mp[reportee]++;
            }
          for( auto pair : mp )
          { int  groupSize =  pair.first+1;
            int   groups =  ceil(pair.second *1.0/groupSize);
             cout <<groupSize<<" "<<  groups<<endl;
            ans +=   groups * groupSize;
              
          }
         return ans ;
    }
};