class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>>obs;
        for(auto& x:obstacles){
            obs.insert({x[0],x[1]});
        }
        
        vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
        int x=0,y=0,curr_dir=0;
        int maxi=0;
        for(auto& cmd:commands){
            if(cmd==-1) curr_dir=(curr_dir+1)%4;
            if(cmd==-2) curr_dir=(curr_dir+3)%4;
            else{
                for(int i=0;i<cmd;i++){
                    int new_x=x+directions[curr_dir][0];
                    int new_y=y+directions[curr_dir][1];
                    if(obs.contains({new_x,new_y})) break;
                    x=new_x;
                    y=new_y;
                    maxi=max(maxi,((x*x)+(y*y)));
                }
            }
        }return maxi;
    }
};