class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int minCost=INT_MAX;
        int i=0,j=0,count=0;
        while(j<n){
            if(blocks[j]=='W') count++;
            if(j-i+1==k){
                minCost=min(minCost,count);
                if(blocks[i]=='W') count--;
                i++;
            }
            j++;
        }
        return minCost;
    }
};