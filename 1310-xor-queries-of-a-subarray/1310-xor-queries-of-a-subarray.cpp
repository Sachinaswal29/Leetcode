class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        //TC-O(n*q)
        // vector<int>ans;
        // for(int i=0;i<queries.size();i++){
        //     int XOR=0;
        //     for(int j=queries[i][0];j<=queries[i][1];j++){
        //         XOR^=arr[j];
        //     }
        //     ans.push_back(XOR);
        // }return ans;

        //TC-O(n+q)
        vector<int>XOR(arr.size(),0);  //cumulative XOR
        XOR[0]=arr[0];
        for(int i=1;i<arr.size();i++) XOR[i]=arr[i]^XOR[i-1];
        vector<int>ans;
        for(auto &q:queries) ans.push_back((q[0]==0)? 0^XOR[q[1]]:XOR[q[0]-1]^XOR[q[1]]);
        return ans;
    }
};