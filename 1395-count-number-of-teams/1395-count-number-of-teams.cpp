class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans=0;
        for(int j=1;j<rating.size()-1;j++){
            int i=j-1;
            int leftSmaller=0;
            int leftGreater=0;
            while(i>=0){
                if(rating[i]<rating[j]) leftSmaller++;
                else if(rating[i]>rating[j]) leftGreater++;
                i--;
            }

            int k=j+1;
            int rightGreater=0;
            int rightSmaller=0;
            while(k<rating.size()){
                if(rating[k]>rating[j]) rightGreater++;
                else if(rating[k]<rating[j]) rightSmaller++;
                k++;
            }
            
            ans+=(leftSmaller*rightGreater)+(leftGreater*rightSmaller);
        }
        return ans;
    }
};