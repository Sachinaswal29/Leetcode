class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size()) return false;
        vector<int>count(1001,0);
        for(int i=0;i<target.size();i++){
            count[target[i]]++;
            count[arr[i]]--;
        }
        for(int i=0;i<1001;i++){
            if(count[i]) return false;
        }
        return true;
    }
};