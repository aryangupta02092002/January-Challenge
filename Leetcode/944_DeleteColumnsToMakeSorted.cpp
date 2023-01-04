class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        const int n = strs.size(), m = strs[0].size();

        for(int j=0; j<m; j++){
            for(int i=1; i<n; i++){
                if(strs[i][j] < strs[i-1][j]){
                    count++;
                    break;
                }
            }    
        }
        return count;
    }
};
