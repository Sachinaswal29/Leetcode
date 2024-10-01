class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>count(k,0);
        for(auto& x:arr){
            int rem=(x%k+k)%k;
            count[rem]++;
        }
        if(count[0]%2) return false;
        for(int rem=1;rem<=k/2;rem++){
            if(count[rem]!=count[k-rem]) return false;
        }return true;
    }
};