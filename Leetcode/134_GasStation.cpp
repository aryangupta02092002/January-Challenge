class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sz = gas.size();
        int start = -1;
        int totalGas = 0, totalCost = 0, bal = 0;
        for(int i=0; i<sz; i++){
            totalGas += gas[i];
            totalCost += cost[i];
            int diff = gas[i] - cost[i];
            
            if(diff >= 0 && start == -1){
                start = i;
                bal = 0;
            }
            bal += diff;
            if(bal < 0){
                start = -1;
                bal = 0;
            }
        }
        return totalGas < totalCost ? -1 : start;
    }
};
