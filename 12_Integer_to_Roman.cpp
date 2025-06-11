 class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> symbols = 
        {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result = "";
        for(auto c:symbols)
        {
            int times = num / c.first;
            num -= (times*c.first);
            
            while(times--)result += c.second;
        }  
        return result;
    }
};

class Solution:
    def intToRoman(self, num: int) -> str:
        symbols = {
            1000: "M",900: "CM",500: "D",
            400: "CD",100: "C",90: "XC",50: "L",
            40: "XL",10: "X",9: "IX",5: "V",4: "IV",1: "I"
        }
        result = ""
        
        for dec,roman in symbols.items():
            times = int(num/dec)
            num -= times*dec
            result += str(roman*times)
            
        return result