class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,vector<int>>um;
        for(int i=0;i<n;i++){
            um[arr[i]].push_back(i);
        }

        vector<bool>visited(n,false);
        queue<int>q;
        q.push(0);
        visited[0]=true;
        int steps=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int index=q.front();
                q.pop();
                int left=index-1;
                int right=index+1;

                if(index==n-1) return steps;
                if(left>=0 && !visited[left]){
                    visited[left]=true;
                    q.push(left);
                }
                 if(right<=arr.size()-1 && !visited[right]){
                    visited[right]=true;
                    q.push(right);
                }

                for(auto i:um[arr[index]]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i]=true;
                    }
                }
                um.erase(arr[index]);
            }
            steps++;
        }
        return steps;
    }
};