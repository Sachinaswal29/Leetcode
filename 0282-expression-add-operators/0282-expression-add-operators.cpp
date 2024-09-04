class Solution {
public:
    void solve(string& num, int& target, int index, long value, int prev,string temp, vector<string>& ans){
        if(index==num.size()){
            if(value==target){
                ans.push_back(temp);
            }
            return;
        }
        string s="";
        long val=0;
        for(int i=index;i<num.size();i++){
            s+=num[i];
            val=val*10+(num[i]-'0');
            if(index==0) solve(num,target,i+1,val,val,s,ans);
            else{
                solve(num,target,i+1,value+val,val,temp+"+"+s, ans);
                solve(num,target,i+1,value-val,-val,temp+"-"+s, ans);
                solve(num,target,i+1,value-prev+prev*val,prev*val,temp+"*"+s, ans);
            }
            if(num[index]=='0') break;
        }
    }
    
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        solve(num,target,0,0,0,"",ans);
        return ans;
    }
};