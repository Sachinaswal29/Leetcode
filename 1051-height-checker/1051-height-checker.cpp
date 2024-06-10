class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>count(101,0);
        for(auto h : heights){
            count[h]++;
        }
        vector<int>expected;
        for(int i=0;i<101;i++){
            while(count[i]--){
                expected.push_back(i);
            }
        }
        int cnt=0;
        for(int i=0;i<heights.size();i++){
            if(expected[i]!=heights[i]) cnt++;
        }
        return cnt;
    }
};