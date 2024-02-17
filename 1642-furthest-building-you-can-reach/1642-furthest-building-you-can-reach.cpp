class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int>pq;
       int i=0;
       for(;i<heights.size()-1;i++){
          if(heights[i]>=heights[i+1]) continue;
          int diff=heights[i+1]-heights[i];
          if(bricks>=diff){
            bricks-=diff;
            pq.push(diff);
          }
          else if(ladders>0){
               if(!pq.empty()){
                  if(pq.top()>diff){
                    bricks+=pq.top();
                    pq.pop();
                    bricks-=diff;
                    pq.push(diff);
                  }
               }
               ladders--;
           }
           else break;
       }
       return i;
    }
};