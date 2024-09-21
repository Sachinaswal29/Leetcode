class Solution {
public:
    vector<int>ans;
    void solve(int num, int n){
        if(num > n) return;
        ans.push_back(num);
        for(int i=0;i<=9;i++){
            solve(num*10+i,n);
        }
    }

    vector<int> lexicalOrder(int n) {
        // TC-O(NlogN)
        // vector<string>v;
        // for(int i=1;i<=n;i++) v.push_back(to_string(i));
        // sort(v.begin(),v.end());
        // vector<int>ans;
        // for(auto& num:v) ans.push_back(stoi(num));
        // return ans;

        //TC- O(N)
        for(int i=1;i<=9;i++){
            solve(i,n);
        }
        return ans;
    }
};