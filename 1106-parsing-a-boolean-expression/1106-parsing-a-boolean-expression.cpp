class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char>st;
        for(auto& ch:expression){
            if(ch==',') continue;
            if(ch==')'){
                vector<char>v;
                while(st.top()!='('){
                    v.push_back(st.top());
                    st.pop();
                }

                st.pop();
                char op=st.top();
                st.pop();

                if(op=='!') {
                    st.push(v[0]=='f' ? 't' : 'f');
                }
                
                else if(op=='&'){
                    bool isFalse=false;
                    for(auto& x:v){
                        if(x=='f'){
                            isFalse=true;
                            break;
                        }
                    }
                    st.push(isFalse ? 'f' : 't');
                }

                else{
                    bool isTrue=false;
                    for(auto& x:v){
                        if(x=='t'){
                            isTrue=true;
                            break;
                        }
                    }
                    st.push(isTrue ? 't' : 'f');
                }
            }else st.push(ch);
        }
        return st.top()=='t' ? true : false;
    }
};