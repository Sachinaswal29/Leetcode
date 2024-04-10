class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        // using queue
        int n=deck.size();
        queue<int>q;
        for(int i=0;i<n;i++) q.push(i);
        sort(deck.begin(),deck.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[q.front()]=deck[i];
            q.pop();
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
            
        // int n=deck.size();
        // sort(deck.begin(),deck.end());
        // vector<int>ans(n,0);
        // int i=0,j=0;
        // bool skip=false;
        // while(i<n){
        //     if(ans[j]==0){
        //         if(!skip){
        //             ans[j]=deck[i];
        //             i++;
        //         }
        //         skip=!skip;
        //     }
        //     j=(j+1)%n;
        // }
        // return ans;
    }
};