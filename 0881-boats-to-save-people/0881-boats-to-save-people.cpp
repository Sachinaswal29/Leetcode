class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       vector<int>count(limit+1,0);
       for(auto& el:people) count[el]++;
       int index=0;
       for(int i=0;i<=limit;i++){
           while(count[i]-- >0) people[index++]=i;
       }
       int i=0,j=people.size()-1;
       int boatCount=0;
       while(i<=j){
        if(people[i]+people[j]<=limit) i++,j--;
        else j--;
        boatCount++;
       }
       return boatCount;
    }
};