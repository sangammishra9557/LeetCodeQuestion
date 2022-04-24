// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

  bool    isprime(long long num)
            {
                 if(num<2)
                    return false;
                    
                 if(num == 2)
                    return true;
                 
                 if(num % 2==0 )
                     return false; 
                 
                 
                
                    
                int sqr = (int)sqrt(num);
                
                 for(int i =3 ; i<= sqr ; i+= 2)
                   {
                       if(num%i==0)
                           return false;
                   }
                return true;
            }
    long long primeProduct(long long L, long long R){
        
        
         long long int mod = 1e9+7;
         long long    pro= 1;
          for(int i = L; i<=R;i++)
              {
                  if(isprime(i))
                    {pro = ((pro%mod) * i)%mod;
                    }
    }return pro;
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