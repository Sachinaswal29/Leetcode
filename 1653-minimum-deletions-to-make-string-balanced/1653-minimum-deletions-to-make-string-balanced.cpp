class Solution {
public:
    int minimumDeletions(string s) {
        // SC-O(n)
        // stack<char>st;
        // int count=0;
        // for(auto& ch:s){
        //     if(!st.empty() && st.top()=='b' && ch=='a') {
        //         st.pop();
        //         count++;
        //     }else st.push(ch);
        // }
        // return count;
        
        // SC-O(1)
        int minDel=0;
        int bCount=0;
        for(auto& ch:s){
            if(ch=='b') bCount++;
            if(ch=='a' && bCount) minDel++,bCount--;
        }
        return minDel;
    }
};