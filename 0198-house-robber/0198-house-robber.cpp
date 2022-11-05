class Solution {
public:
    int rob(vector<int>& nums) {
         int n = nums.size(); 
         if( n == 1)  return nums[0];
         nums[n-2] = max(nums[n-1] , nums[n-2] );
         for(int i = n - 3 ; i>= 0 ; i--){
             nums[i] = max(nums[i+1] , nums[i]+ nums[i+2]);
       }
             return nums[0];
    }
      int lootmoney( int ci ,  vector<int> & nums , unordered_map<int , int> &mp){
            if( ci >= nums.size())  return 0 ;
          
            if(mp.find(ci) != mp.end())  return mp[ci];
            int consider =   nums[ci] + lootmoney(ci+2 , nums ,mp);
            int notconsider =  lootmoney(ci+1 , nums , mp);
           return   mp[ci] =  max( consider , notconsider);
     }
    
    
//     int rob(vector<int>& nums) {
//          int n = nums.size();
//          if(n == 2 )
//                return max(nums[1],nums[0]);
        
//          if(n == 1)
//                return nums[0];
         
        
//          nums[n-2] = max(nums[n-2],nums[n-1]);
//          for( int i = nums.size()-3; i >= 0; i--){
             
//               nums[i]= max(nums[i] + nums[i+2], nums[i+1]);
             
//          }
//          for( auto it : nums ) cout <<it<<" ";      
//         return nums[0] ;
         
//     }
};