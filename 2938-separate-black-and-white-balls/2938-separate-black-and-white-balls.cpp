class Solution {
public:
    long long minimumSteps(string s) {
        long long steps=0,count=0;
        for(auto& ch:s){
            if(ch=='1') count++;
            else steps+=count;
        }
        return steps;
    }
};