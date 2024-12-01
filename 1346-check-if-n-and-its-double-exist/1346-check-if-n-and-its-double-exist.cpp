class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>st;
        for(auto& x:arr){
            if(st.contains(x*2) || (x%2==0 && st.contains(x/2))) return true;
            st.insert(x);
        }
        return false;
    }
};