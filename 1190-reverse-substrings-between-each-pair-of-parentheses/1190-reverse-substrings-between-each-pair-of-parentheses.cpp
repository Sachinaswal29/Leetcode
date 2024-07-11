class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(auto ch:s){
            if(ch==')'){
                string str="";
                while(st.top()!='(' && !st.empty()){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                for(auto c:str) st.push(c);
            }
            else st.push(ch);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};