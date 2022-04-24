// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

  bool    isprime(long long number)
            {
                  
    if (number < 2)
        return false;
    
    if (number == 2 || number == 3)
        return true;    
    
    if(number % 2 == 0 || number %3 ==0)
        return false;
    
    int sqr = (int) sqrt(number);
    int dx = 4;
    
    for (int i = 5; i <= sqr; i+=dx) {
        if (number % i == 0)
            {return false;
            }
        dx = - (dx - 6);
        
    }
    
    return true;
}
            
    long long primeProduct(long long L, long long R){
        
        
         long long int mod = 1e9+7;
         long long  pro= 1;
          for(int i = L; i<=R;i++)
              {
                  if(isprime(i))
                    {pro = ((pro%mod) * i)%mod;
                     
                    }
    }
 
     return pro;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends