class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string say=countAndSay(n-1);
        string s="";
        for(int i=0;i<say.size();i++){
            int count=1;
            char ch=say[i];
            while(i<say.size() && say[i]==say[i+1]){
                i++,count++;
            }
            s+=to_string(count)+string(1,ch);
        }
        return s;
    }
};