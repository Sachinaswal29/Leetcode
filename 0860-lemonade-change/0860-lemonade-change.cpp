class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count_5=0;
        int count_10=0;
        for(auto x:bills){
            if(x==5) count_5++;
            else if(x==10){
                if(count_5>0){
                count_5--;
                count_10++;
                }else return false;
            }
            else{
                if(x==20 && count_5 && count_10){
                count_5--;
                count_10--;
                }else if(count_5>2) count_5-=3;
                else return false;
            }
        }
        return true;
    }
};