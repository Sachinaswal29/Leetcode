class Solution {
public:

    int myAtoi(string s) {
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i == s.length()) {
            return 0;
        }

        int num = 0;
        bool negative = s[i] == '-';
        bool positive = s[i] == '+';

        if (negative || positive) {
            i++;
        }

        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return negative ? INT_MIN : INT_MAX;
            }
            num = num * 10 + digit;
            i++;
        }

        return negative ? -num : num;
    }
};