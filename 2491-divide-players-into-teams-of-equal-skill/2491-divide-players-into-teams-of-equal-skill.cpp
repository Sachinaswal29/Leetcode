class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        // O(NlogN)
        // sort(skill.begin(),skill.end());
        // int left=0,right=skill.size()-1;
        // int requiredSum=skill[left]+skill[right];
        // long long ans=0;
        // while(left<=right){
        //     if(skill[left]+skill[right]==requiredSum){
        //         ans+=(long long)skill[left++]*(long long)skill[right--];;
        //     }else return -1;
        // }
        // return ans;

        //O(N)
        vector<int>count(1001,0);
        for(auto& x:skill) count[x]++;

        int j=0;
        for(int i=0;i<1001;i++){
            while(count[i]--) skill[j++]=i;
        }
        
        int left=0,right=skill.size()-1;
        int requiredSum=skill[left]+skill[right];
        long long ans=0;
        while(left<=right){
            if(skill[left]+skill[right]==requiredSum){
                ans+=(long long)skill[left++]*(long long)skill[right--];;
            }else return -1;
        }
        return ans;
    }
};