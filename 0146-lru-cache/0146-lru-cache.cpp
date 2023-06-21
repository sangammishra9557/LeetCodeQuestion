class LRUCache {
public:
    int cap,size ;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
    list<pair<int, int>> li;
    LRUCache(int capacity) {
        cap = capacity;
    }
    int get(int key) {
        auto it = mp.find(key);
        
        if(it == mp.end()) return -1 ;
        int val = it->second->second;
        li.erase(it->second);
        li.push_front({key,val});
        mp[key] = li.begin();
        return val;
    }
    void put(int key, int value) {
        auto it = mp.find(key);
        if(it != mp.end()){
            it->second->second = value;
            li.erase(it->second);
            li.push_front({key,value});
            mp[key] = li.begin();
            return;
        }
         if(mp.size() == cap){
             int k = li.back().first;
             mp.erase(k);
             li.pop_back();
            
         }
        li.push_front({key, value});
        mp[key] = li.begin();
        size++;
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */