class Solution {
public:
    int getLucky(string s, int k) {
        // Approach 1
        // string num="";
        // for(auto& ch:s){
        //     num+=to_string(ch-'a'+1);
        // }
        // while(k--){
        //     int sum=0;
        //     for(auto& ch:num){
        //         sum+=ch-'0';
        //     }
        //     num=to_string(sum);
        //     if(num.size()==1) break;
        // }
        // return stoi(num);

        // Approach 2
        int sum=0;
        for(auto& ch:s){
            int val=ch-'a'+1;
            sum+=val<10 ? val : val%10+val/10;
        }
        k--;
        while(k-- && sum>9){
            int temp=sum;
            sum=0;
            while(temp){
                sum+=temp%10;
                temp/=10;
            }
        }
        return sum;
    }
};