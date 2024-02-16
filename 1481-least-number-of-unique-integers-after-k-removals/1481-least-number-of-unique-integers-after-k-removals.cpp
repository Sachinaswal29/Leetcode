class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto el:arr) mp[el]++;
       
        vector<int>freq;
        for(auto i:mp) freq.push_back(i.second);
        sort(freq.begin(),freq.end());
        
        for(int i=0;i<freq.size();i++){
            if(k<freq[i]) return freq.size()-i;
            k-=freq[i];
        }
        return 0;
    }
};