class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size(), balance = 0; 
        
        for(int i = 0; i<n; i++) balance += gas[i]-cost[i];
        
        if(balance < 0) return -1;

        //----------------- 
        int result = 0, start = 0;

        for(int i = 0; i<n; i++)
        {
            balance += gas[i]-cost[i];

            start += gas[i]-cost[i];
            if(start < 0){
                start = 0; result = i+1;
            }
        }

        return result;
    }
};