class AllOne {
public:
    priority_queue<pair<int,string>>maxHeap;
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>minHeap;
    unordered_map<string,int>mp;
    AllOne() {
        
    }
    
    void inc(string key) {
        mp[key]++;
        maxHeap.push({mp[key],key});
        minHeap.push({mp[key],key});
    }
    
    void dec(string key) {
        mp[key]--;
        maxHeap.push({mp[key],key});
        minHeap.push({mp[key],key});
    }
    
    string getMaxKey() {
        while(maxHeap.size()){
            if(maxHeap.top().first==mp[maxHeap.top().second] && mp[maxHeap.top().second]!=0){
                return maxHeap.top().second;
                break;
            }else maxHeap.pop();
        }
        return "";
    }
    
    string getMinKey() {
        while(minHeap.size()){
            if(minHeap.top().first==mp[minHeap.top().second] && mp[minHeap.top().second]!=0){
                return minHeap.top().second;
                break;
            }else minHeap.pop();
        }
        return "";
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */