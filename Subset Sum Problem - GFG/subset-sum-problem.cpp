//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool exist(int i ,int target ,  vector<int> & arr ,vector<vector<int>> &dp){
            
            if(target == 0) return 1 ; 
            
             if(i == 0){
                 return arr[0] == target;
             }
              if(dp[i][target] != -1) return dp[i][target];
             
              if (exist(i-1,target, arr,dp)){
                  return dp[i][target] = true;
              }
             bool take  = false;
             if(arr[i]<= target) {
                 if(exist(i-1,target-arr[i] ,arr,dp)) return dp[i][target] = true;
             }
             return  dp[i][target] = false;
        
        
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
         int n = arr.size();
       // vector<vector<int>> dp(n, vector<int> (sum+1,-1));
       //  return exist(arr.size()-1 ,sum, arr , dp);
       // here inintially we have to fill all the zeros means intially all false;  
    //   vector<vector<int>> dp(n+1 , vector<int> (sum+1 , 0));
//    tabulation cpde    //   for(int i=0;i<n ; i++)dp[i][0] = 1 ; 
    //     if(arr[0] <= sum) dp[0][arr[0]] = 1 ; 
  // space opmtimezed code now 
  
        vector<int> prev(sum+1 , 0) , curr(sum+1 , 0);
        prev[0] = curr[0] = 1;
        if(arr[0] <= sum)  prev[arr[0]]= 1;
        for(int i = 1 ; i<n ; i++){
            
            for(int target = 1 ; target<=sum ; target++){
                  bool nottake = prev[target];
                  bool take= 0;
                  if(arr[i] <=target ){
                       take = prev[target - arr[i]];    

                  }
                  curr[target] = take|nottake;
                    }
                    
                 prev = curr;    
                }
        return   prev[sum];
    }
     
};
     
     
    

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends