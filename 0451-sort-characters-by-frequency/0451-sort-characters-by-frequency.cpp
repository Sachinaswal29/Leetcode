class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>um;
        for(auto &i:s) um[i]++;
        priority_queue<pair<int, char>> pq;
        for(auto i:um) pq.push({i.second,i.first});
        string ans="";
        while(!pq.empty()){
            pair<int,char>temp=pq.top();
            pq.pop();
            ans+=string(temp.first,temp.second);
        }
        return ans;
    }
};