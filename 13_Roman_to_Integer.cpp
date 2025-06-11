class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = 
        {
            {'I', 1},{'V', 5},{'X', 10},{'L', 50},
            {'C', 100}, {'D', 500},{'M', 1000}
        };
        reverse(s.begin(),s.end());
        
        int cnt = 0;
        char last = s[0];

        for (auto c : s) 
        {
            if(roman[last] > roman[c]) cnt -= roman[c]; 
            else cnt += roman[c]; 
            last = c;
        }
        return cnt;
    }
};


class Solution:
    def romanToInt(self, s: str) -> int:
        symbols = {'I': 1,'V': 5,'X': 10,'L': 50,'C': 100,'D': 500,'M': 1000}

        result , last = 0, s[-1]

        for c in s[::-1]:
            if(symbols[last] > symbols[c]):
                result -= symbols[c]
            else:
                result += symbols[c]
            last = c

        return result