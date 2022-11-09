class StockSpanner {
public:
    stack<pair<int,int>> st;
     int idx;
    StockSpanner() { 
          idx =0;
    }
    
    int next(int price) {
          int ans ;
           while(st.size()> 0 and price >=st.top().first){
               st.pop();
           }
            if(st.size()==0)  ans= (idx)+1;
            else   ans=  idx-(st.top().second);
            st.push({price,idx});
            idx++;
            return ans ;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */