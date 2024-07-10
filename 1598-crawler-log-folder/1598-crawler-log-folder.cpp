class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(auto x:logs){
            if(x=="../") count=max(0,count-1);
            else if(x=="./") continue;
            else count++;
        }
        return count;
    }
};