class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto& ch:details){
            int age=ch[11]-'0';
            age=age*10+(ch[12]-'0');
            if(age>60) count++;
        }
        return count;
    }
};