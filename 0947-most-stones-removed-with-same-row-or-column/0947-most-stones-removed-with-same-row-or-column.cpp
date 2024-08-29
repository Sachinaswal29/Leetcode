class Solution {
public:
    // By using dfs
    void dfs(vector<vector<int>>& stones, int index, vector<int>& visited){
        visited[index]=1;
        for(int i=0;i<stones.size();i++){
            if(!visited[i] && (stones[i][0]==stones[index][0] || stones[i][1]==stones[index][1]))                                          
                dfs(stones,i,visited);
        }
    }
    // By using DSU
    int findParent(int u, vector<int>& parent){
        if(u==parent[u]) return u;
        return parent[u]=findParent(parent[u],parent);
    }
    void unionByRank(int u, int v, vector<int>&parent, vector<int>&rank){
        int Pu=findParent(u,parent);
        int Pv=findParent(v,parent);
        if(parent[Pu]!=parent[Pv]){
            if(rank[Pu]<rank[Pv]){
                parent[Pu]=parent[Pv];
            }else if(rank[Pu]>rank[Pv]){
                parent[Pv]=parent[Pu];
            }else{
                parent[Pv]=parent[Pu];
                rank[parent[Pu]]++;
            }
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int count=0;
        // vector<int>visited(n,0);
        // for(int i=0;i<n;i++){
        //     if(!visited[i]){
        //         dfs(stones,i,visited);
        //         count++;
        //     }
        // }
        vector<int>parent(n);
        for(int i=0;i<n;i++) parent[i]=i;
        vector<int>rank(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    unionByRank(i,j,parent,rank);
                }
            }
        }

        for(int i=0;i<n;i++){
            if(parent[i]==i) count++;
        }
        return n-count;
    }
};