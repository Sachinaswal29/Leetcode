class Solution {
private:
    int pointsForString(string& s, string maqsadString, int point){
        stack<char>st;
        int totalPoints=0;
        for(auto ch:s){
            if(st.empty()) st.push(ch);
            else{
                if(ch==maqsadString[1] && st.top()==maqsadString[0]){
                    st.pop();
                    totalPoints+=point;
                }else st.push(ch);
            }
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return totalPoints;
    }
    
public:
    int maximumGain(string s, int x, int y) {
        string s1="ab",s2="ba";
        if(x<y) swap(s1,s2),swap(x,y);
        return pointsForString(s,s1,x)+pointsForString(s,s2,y);
    }
};