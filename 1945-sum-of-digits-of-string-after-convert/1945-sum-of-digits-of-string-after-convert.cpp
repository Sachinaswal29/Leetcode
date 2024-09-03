class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for(auto& ch:s){
            num+=to_string(ch-'a'+1);
        }
        while(k--){
            int sum=0;
            for(auto& ch:num){
                sum+=ch-'0';
            }
            num=to_string(sum);
            if(num.size()==1) break;
        }
        return stoi(num);
    }
};