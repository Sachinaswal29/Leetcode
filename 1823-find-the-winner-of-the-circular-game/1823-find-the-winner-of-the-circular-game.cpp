class Solution {
public:
    int solve (int n,int k){
      if(n==1) return 0;
      return (solve(n-1,k)+k)%n;
    }

    int findTheWinner(int n, int k) {
        // O(n2)
        // vector<int>v;
        // for(int i=1;i<=n;i++) v.push_back(i);
        // int i=0;
        // while(v.size()>1){
        //     int idx=(i+k-1)%v.size();
        //     v.erase(v.begin()+idx);
        //     i=idx;
        // }
        // return v[0];
        
        // O(n*k)
        // queue<int>q;
        // for(int i=1;i<=n;i++) q.push(i);
        // while(q.size()>1){
        //     int count=1;
        //     while(count!=k){
        //         q.push(q.front());
        //         q.pop();
        //         count++;
        //     }
        //     q.pop();
        // }
        // return q.front();

        return solve(n,k)+1; // O(n)
    }
};