class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(auto&x:amount){
            if(x>0) pq.push(x);
        }
        int days=0;
        while(pq.size()>1){
            int a=pq.top()-1;
            pq.pop();
            int b=pq.top()-1;
            pq.pop();
            if(a>0) pq.push(a);
            if(b>0) pq.push(b);
            days++;
        }
        if(pq.size()) days+=pq.top();
        return days;
    }
};