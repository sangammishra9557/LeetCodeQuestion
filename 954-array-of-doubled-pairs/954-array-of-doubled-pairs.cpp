class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
    int n = arr.size()/2;
      sort(arr.begin() , arr.end());
      unordered_map<int , int> mp ; 
      for(int & i : arr)mp[i]++;
       for(int &i:arr ){
           if (mp[i]== 0) continue ;
          if( i<0  &&  i%2!= 0) return  false; //[-5,2] wala test case yad rkhna ;
           int  target =   i < 0 ? i/2: 2*i;
           if(mp[target] == 0)  return false; 
           mp[i]--;         // agr yeh nhin krenge toh jo target hai uske liye bhi value search krne lgega
           mp[target]--;
       }
        return true;
      
        
    }
};