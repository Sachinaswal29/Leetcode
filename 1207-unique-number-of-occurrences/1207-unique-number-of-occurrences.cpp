class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>s;
        for(auto i:arr) mp[i]++;
        for(auto i:mp) s.insert(i.second);
        return mp.size()==s.size();


        // without HashMap and HashSet
        // int k=1000;
        // vector<int>freq(2001);
        // for(auto i:arr) freq[i+k]++;
        // sort(freq.begin(),freq.end());
        // for(int i=1;i<2001;i++){
        //     if(freq[i]!=0 && freq[i]==freq[i-1]) return false;
        // }
        // return true;
    }
};