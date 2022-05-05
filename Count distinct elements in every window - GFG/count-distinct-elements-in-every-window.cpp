// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int nums[], int n, int k)
    {
      vector<int> ans ; 
       unordered_map<int,int> mp; 
       int  distinct = 0 ; 
       for(int i =0 ; i< k -1 ; i++)
        {
            mp[nums[i]]++;
        }
         
          int j = 0 ; 
         for( int i = k-1 ; i<n; )
         {  mp[nums[i]]++; // acquired the values;
             ans.push_back(mp.size());
             
             
             mp[nums[j]]--;
             if(mp[nums[j]] == 0)
               {
                   mp.erase(nums[j]);
               }
               i++;
               j++;
             
             
         }
          return  ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends