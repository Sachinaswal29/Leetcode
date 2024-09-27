class MyCalendarTwo {
public:
    vector<pair<int,int>>doubleBooking;
    vector<pair<int,int>>booking;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto& db:doubleBooking){
            if(max(db.first,start)<min(db.second,end)){
                return false;
            }
        }
        
        for(auto& b:booking){
            if(max(b.first,start)<min(b.second,end)){
                doubleBooking.push_back({max(b.first,start),min(b.second,end)});
            }
        }
        
        booking.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */