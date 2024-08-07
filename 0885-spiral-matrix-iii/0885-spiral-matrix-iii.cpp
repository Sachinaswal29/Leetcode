class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>ans;
        // ans.push_back({rStart,cStart});
        // int steps=0,dir=0;
        // vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
        // while(ans.size()<rows*cols){
        //     if(dir==0 || dir==2) steps++;
        //     for(int step=0;step<steps;step++){
        //         rStart+=directions[dir][0];
        //         cStart+=directions[dir][1];
        //         if(rStart<rows && rStart>=0 && cStart<cols && cStart>=0) ans.push_back({rStart,cStart});
        //     }
        //     dir=(dir+1)%4;
        // }
        
        int steps=1;
        while(ans.size()<rows*cols){
            for(int step=0;step<steps;step++){
                if(rStart<rows && rStart>=0 && cStart<cols && cStart>=0) {
                    ans.push_back({rStart,cStart});
                }cStart++;
            }
            for(int step=0;step<steps;step++){
                if(rStart<rows && rStart>=0 && cStart<cols && cStart>=0) {
                    ans.push_back({rStart,cStart});
                }rStart++;
            }
            steps++;
             for(int step=0;step<steps;step++){
                if(rStart<rows && rStart>=0 && cStart<cols && cStart>=0) {
                    ans.push_back({rStart,cStart});
                }cStart--;
            }
            for(int step=0;step<steps;step++){
                if(rStart<rows && rStart>=0 && cStart<cols && cStart>=0) {
                    ans.push_back({rStart,cStart});
                }rStart--;
            }
            steps++;
        }
        return ans;
    }
};