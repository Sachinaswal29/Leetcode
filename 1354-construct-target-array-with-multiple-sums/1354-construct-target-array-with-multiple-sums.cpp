class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long>pq;
        long long sum=0;
        for(auto& el:target){
            pq.push(el);
            sum+=el;
        }
        
        long long element=0,maxEle=0,remSum=0;
        while(pq.top()!=1){
            int maxEle=pq.top();
            pq.pop();
            remSum=sum-maxEle;
            if(remSum<=0 || remSum>=maxEle) return 0;
            // element=maxEle-remSum; // it will give tle
            element=maxEle%remSum;
            if(element==0 ){
                return (remSum==1) ? 1 : 0;
            }
            sum=remSum+element;
            pq.push(element);
        }
        return 1;
    }
};