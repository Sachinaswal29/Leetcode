class Solution {
public:
    string fractionAddition(string expression) {
        int n=expression.size();
        int numerator=0;
        int denominator=1;
        int i=0;
        while(i<n){
            int currNumerator=0;
            int currDenominator=0;
            bool isNeg=expression[i]=='-';
            if(expression[i]=='+' || expression[i]=='-') i++;
            while(i<n && isdigit(expression[i])){
                int num=expression[i]-'0';
                currNumerator=currNumerator*10+num;
                i++;
            }
            i++;
            if(isNeg) currNumerator*=-1;
            while(i<n && isdigit(expression[i])){
                int num=expression[i]-'0';
                currDenominator=currDenominator*10+num;
                i++;
            }
            numerator=(numerator*currDenominator)+(currNumerator*denominator);
            denominator=denominator*currDenominator;
        }
        int GCD=abs(__gcd(numerator,denominator));
        numerator/=GCD;
        denominator/=GCD;
        return to_string(numerator)+"/"+to_string(denominator);
    }
};