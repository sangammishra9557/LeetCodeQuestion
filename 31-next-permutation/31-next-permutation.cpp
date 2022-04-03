class Solution {
public:
    void nextPermutation(vector<int>& nums) {
          int n = nums.size();
          if(n==1) return ;
          int idx1=-1;
          for(int i=n-2;i>=0;i--){
               if(nums[i]<nums[i+1]) {idx1=i;
                                      break;}
          }
     cout<<idx1;
           if (idx1==-1) {reverse(nums.begin(),nums.end());
                          return;}
           else{
                int idx2;
               for(int  i= n-1;i>=0;i--){
                   if(nums[i]>nums[idx1]) 
                   {idx2=i;
                    //cout<<idx2<<"idx2";
                    break;
                   }              
                    }
                cout<<idx1<<" idx1"<<idx2<<" idx2";
                swap(nums[idx1],nums[idx2]);
           }
               reverse(nums.begin()+idx1+1,nums.end());
               
    
    }
};