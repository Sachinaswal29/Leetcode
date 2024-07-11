class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        vector<int>oppositeIndex(s.size(),-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                oppositeIndex[i]=st.top();
                oppositeIndex[st.top()]=i;
                st.pop();
            }
        }
        string ans="";
        int dir=1;
        for(int i=0;i<s.size();i+=dir){
            if(s[i]=='(' || s[i]==')'){
                i=oppositeIndex[i];
                dir*=-1;
            }else ans+=s[i];
        }
        return ans;
    }
};