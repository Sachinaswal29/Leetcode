class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flipCount=0;
        while(a>0 || b>0 || c>0){
            int aBit=a&1;
            int bBit=b&1;
            int cBit=c&1;

            if((aBit|bBit)!=cBit){
                if(aBit & bBit) flipCount+=2;
                else flipCount++;
            }

            a>>=1;
            b>>=1;
            c>>=1;
        }
        return flipCount;
    }
};