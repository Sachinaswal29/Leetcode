class Solution {
public:
    string minRemoveToMakeValid(string s) {
        /*--------------------------APPROACH 1-----------------------*/
        // stack<int>st;
        // unordered_set<int>remove_idx;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='(') st.push(i);
        //     else if(s[i]==')'){
        //         if(st.empty()) remove_idx.insert(i);
        //         else st.pop();
        //     }
        // } 
        
        // while(!st.empty()){
        //     remove_idx.insert(st.top());
        //     st.pop();
        // }

        // string ans="";
        // for(int i=0;i<s.size();i++){
        //     if(remove_idx.find(i)==remove_idx.end()) ans.push_back(s[i]);
        // }
        // return ans;

    /*------------------------------APPROACH 2-------------------------*/
        // stack<int>st;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(') st.push(i);
        //     else if(s[i]==')'){
        //         if(st.empty()) s[i]='#';
        //         else st.pop();
        //     }
        // }
        // while(st.size()){
        //     s[st.top()]='#';
        //     st.pop();
        // }
        // s.erase(remove(s.begin(), s.end(), '#'), s.end()); 
        // return s;

    /*------------------------------APPROACH 3-------------------------*/
        string temp="";
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                open++;
                temp.push_back(s[i]);
            }
            else if(s[i]==')' && open > 0){
                open--;
                temp.push_back(s[i]);
            }
            else if(s[i]>='a' && s[i]<='z') temp.push_back(s[i]);
        }
        
        string ans="";
        int close=0;
        for(int i=temp.size()-1;i>=0;i--){
            if(temp[i]==')') {
                close++;
                ans.push_back(temp[i]);
            }
            else if(temp[i]=='(' && close > 0){
                close--;
                ans.push_back(temp[i]);
            }
            else if(temp[i]>='a' && temp[i]<='z') ans.push_back(temp[i]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};