class MyStack {
private:
    // queue<int> q1;
    //  queue <int> q2;
      queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
      //  q1.push(x);
          q.push(x);
         for(int i =0 ; i<q.size()-1 ; i++)
         {
              q.push(q.front());
              q.pop();
         }
        
           
        
    }
    
    int pop() {
//          int n = q1.size();
//           for(int i =0 ; i< n-1;i++)
//           {
//               q2.push(q1.front());
//               q1.pop();
//           }
//            int node  = q1.front();
//            q1.pop();
//            while(!q2.empty()){
//                q1.push(q2.front());
//                q2.pop();
//            }
//           return  node;
        int node = q.front();
          q.pop();
            return node;
        
    }
    
    int top() {
//          int n = q1.size();
//           for(int i =0 ; i< n-1;i++)
//           {
//               q2.push(q1.front());
//               q1.pop();
//           }
//            int node  = q1.front();
//             q1.pop();
         
//            while(!q2.empty()){
//                q1.push(q2.front());
//                q2.pop();
//            }
//            q1.push(node);
//           return node;
            int node = q.front();
            return node;
    }
    
    bool empty() {
         return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */