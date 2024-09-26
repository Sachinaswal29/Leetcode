class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int totalBottle=numBottles;
        while(numBottles>=numExchange){
            totalBottle++;
            numBottles=numBottles-numExchange+1;
            numExchange++;
        }
        return totalBottle;
    }
};