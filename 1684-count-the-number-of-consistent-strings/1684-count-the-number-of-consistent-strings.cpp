class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // vector<int>count(26,0);
        // for(auto&x:allowed) count[x-'a']++;
        // int cnt=0;
        // for(auto&s:words){
        //     bool isPresent=true;
        //     for(auto&ch:s){
        //         if(!count[ch-'a']){
        //             isPresent=false;
        //             break;
        //         }
        //     }
        //     if(isPresent) cnt++;
        // }
        // return cnt;

        //Using bit Manipulation
        int mask=0;
        for(auto&x:allowed){
            mask|=1<<(x-'a');
        }
        int cnt=0;
        for(auto&s:words){
            bool isPresent=true;
            for(auto&ch:s){
                if(!((mask>>(ch-'a'))&1)){
                    isPresent=false;
                    break;
                }
            }
            if(isPresent) cnt++;
        }
        return cnt;
    }
};