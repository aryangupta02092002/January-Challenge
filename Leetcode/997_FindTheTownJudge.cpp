class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> hashmap(n+1, 0);
        for(auto i : trust){
            hashmap[i[0]]--;
            hashmap[i[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(hashmap[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};
