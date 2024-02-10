class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening=0,closing=0;
        for(auto i:s){
            if(i=='(') opening++;
            else if(opening>0) opening--;
            else closing++;
        }
        return opening+closing;
    }
};