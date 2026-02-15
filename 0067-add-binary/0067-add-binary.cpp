class Solution {
public:
    string addBinary(string a, string b) {
       int sum=0,carry=0;
       string ans="";
       int aLen=a.length()-1;
       int bLen=b.length()-1;
       while(aLen>=0||bLen>=0){
           sum=carry;
           if(aLen>=0) sum+=a[aLen--]-'0';
           if(bLen>=0) sum+=b[bLen--]-'0';
           ans+=to_string(sum%2);
           carry=sum/2;
       }
       if(carry!=0) ans+='1';
       reverse(ans.begin(),ans.end());
       return ans;
    }
};