class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto& x:arr1) mp[x]++;
        int j=0;
        for(auto& x:arr2){
            while(mp[x]--){
                arr1[j++]=x;
            }
        }
        for(auto& x:mp){
            while(x.second-- >0){
                arr1[j++]=x.first;
            }
        }
        return arr1;
    }
};