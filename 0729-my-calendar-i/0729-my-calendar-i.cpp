class MyCalendar {
public:
    //O(N)
    // vector<pair<int,int>>events;
    // MyCalendar() {
        
    // }
    
    // bool book(int start, int end) {
    //     for(auto& [s,e]:events){
    //         if(max(start,s)<min(end,e)) return false;
    //     }
    //     events.push_back({start,end});
    //     return true;
    // }

    //O(logN)
    set<pair<int,int>>st;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto it=st.lower_bound({start,end});
        if(it!=st.end() && (*it).first < end) return false;
        if(it!=st.begin()){
            auto previt=prev(it);
            if(previt->second > start) return false;
        }
        st.insert({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */