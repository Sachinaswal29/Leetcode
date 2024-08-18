class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1) return 1;
        vector<int>ugliNums(n);
        ugliNums[0]=1;
        int l2=0,l3=0,l5=0;
        for(int i=1;i<n;i++){
            ugliNums[i]=min({2*ugliNums[l2],3*ugliNums[l3],5*ugliNums[l5]});
            if(ugliNums[i]==2*ugliNums[l2]) l2++;
            if(ugliNums[i]==3*ugliNums[l3]) l3++;
            if(ugliNums[i]==5*ugliNums[l5]) l5++;
        }
        return ugliNums[n-1];
    }
};