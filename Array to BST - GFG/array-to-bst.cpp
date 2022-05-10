// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> ans ; 
        helper( 0 , nums.size() -1 , ans , nums);
         return ans;
        
    }
private :
      void helper( int i , int j ,  vector<int> & ans, vector<int> & nums){
          
           if(  j < 0 ||  i == nums.size() || i > j )
              return ;
              
              
            int mid =    (i+j)/2;
            ans.push_back(nums[mid]);
            helper( i , mid-1 , ans , nums);
            helper( mid+1, j , ans , nums);
            
          
          
      }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends