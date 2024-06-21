class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        for(int i=0;i<customers.size();i++){
            if(!grumpy[i]) ans+=customers[i];
        }
        int i=0,j=0;
        int maxi=0;
        int cur=0;
        while(j<grumpy.size()){
            if(grumpy[j]) cur+=customers[j];
            if(j>=minutes-1){
                maxi=max(maxi,cur);
                if(grumpy[i]) cur-=customers[i];
                i++;
            }
            j++;
        }
        return ans+maxi;
    }
};