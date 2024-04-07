class Solution {
public:
    bool checkValidString(string s) {
        int open=0,close=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='*') open++;
            else open--;
            if(open<0) return false;
            if(s[n-i-1]==')' || s[n-i-1]=='*') close++;
            else close--;
            if(close<0) return false;
        }
        return true;
    }
};