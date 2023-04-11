class Solution {
public:
    int majorityElement(vector<int>& v) {
            int cnt = 0 , ele ; 
             for(int i =0 ; i<v.size() ; i++){
                  if(!cnt) {
                       cnt =  1 ; 
                       ele = v[i];
                  }
                  else if(v[i] == ele) cnt++;
                  else cnt--;
                 
                }
          return ele;
            }
    };
