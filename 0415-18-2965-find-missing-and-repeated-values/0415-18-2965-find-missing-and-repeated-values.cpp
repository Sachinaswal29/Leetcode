class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missing=0;
        int repeated=0;
        set<int>st;
        for(auto row:grid){
            for(auto ele:row){
                if(st.contains(ele)) repeated=ele;
                else st.insert(ele);
            }
        }
        int n=grid.size();
        int i=1;
        for(auto s:st){
            if(s!=i) {
                missing=i;
                break;
            }  
            i++;
        }
        if(missing==0) missing=i;
        return{repeated,missing};
    }
};