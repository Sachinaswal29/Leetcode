class Solution {
public:
    bool hasDupli(string s1, string s2){
        vector<int>v(26,0);
        for(auto i:s1){
            if(v[i-'a']>0) return true;
            v[i-'a']++;
        }
        for(auto i:s2){
            if(v[i-'a']>0) return true;
        }
        return false;
    }

    int solve(vector<string>& arr,int idx, int n, string s){
        if(idx>=n) return s.size();
        int include=0,exclude=0;
        if(hasDupli(arr[idx],s)){
            exclude=solve(arr,idx+1,n,s);
        }else{
            include=solve(arr,idx+1,n,s+arr[idx]);
            exclude=solve(arr,idx+1,n,s);
        }
        return max(include,exclude);
    }

    int maxLength(vector<string>& arr){
        int n=arr.size();
        return solve(arr,0,n,"");
    }
};