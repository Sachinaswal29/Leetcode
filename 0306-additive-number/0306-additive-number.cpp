class Solution {
private:
    string stringSum(string a, string b){
        int i=a.length()-1;
        int j=b.length()-1;
        string ans="";
        int sum=0;
        while(i>=0 && j>=0){
          sum+=a[i--]-'0'+b[j--]-'0';
          ans.push_back(sum%10+'0');
          sum/=10;
        }
        while(i>=0){
          sum+=a[i--]-'0';
          ans.push_back(sum%10+'0');
          sum/=10;
        }
        while(j>=0){
          sum+=b[j--]-'0';
          ans.push_back(sum%10+'0');
          sum/=10;
        }
        if(sum) ans.push_back(sum+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    bool solve(string a, string b, string c){
        if((a.size()>1 && a[0]=='0') || (b.size()>1 && b[0]=='0')) return false;
        string sum=stringSum(a,b);
        int i=0,j=0;
        while(i<sum.size() && j<c.size()){
            if(sum[i]!=c[j]) return false;
            i++;
            j++;
        }
        if(i!=sum.size()) return false;
        if(j==c.size()) return true;
        c=c.substr(j);
        return solve(b,sum,c);

    }
    
public:
    bool isAdditiveNumber(string num) {
        for(int i=0;i<num.size()/2;i++){
            for(int j=i+1;j<num.size()-1;j++){
                string a=num.substr(0,i+1);
                string b=num.substr(i+1,j-i);
                string c=num.substr(j+1);
                if(solve(a,b,c)) return true;
            }
        }
        return false;
    }
};