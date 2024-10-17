class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int maxIdx=-1,maxNum=-1;
        int leftIdx=-1,rightIdx=-1;

        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>maxNum){
                maxNum=s[i];
                maxIdx=i;
                continue;
            }
            if(s[i]<maxNum){
                leftIdx=i;
                rightIdx=maxIdx;
            }
        }

        if(leftIdx==-1) return num;
        swap(s[leftIdx],s[rightIdx]);
        
        return stoi(s);
    }
};