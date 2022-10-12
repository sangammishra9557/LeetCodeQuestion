class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int m=INT_MIN,sum=0;
        for(int i =0;i<v.size();i++)
        {   sum=sum+v[i];
            m = max(sum , m);
            if(sum<0) sum=0;
            
        }
        return m;
        
    }
};