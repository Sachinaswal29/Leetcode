class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int left=0,right=skill.size()-1;
        int x=skill[left]+skill[right];
        long long ans=0;
        while(left<=right){
            if(skill[left]+skill[right]==x){
                ans+=(long long)skill[left++]*(long long)skill[right--];;
            }else return -1;
        }
        return ans;
    }
};