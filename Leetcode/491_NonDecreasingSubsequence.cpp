class Solution {
public:
    map<vector<int>, int> m;
    
    void helper(vector<vector<int>> &ans, vector<int> &nums, int idx, vector<int> &tmp){
        if(tmp.size() >= 2){
            m[tmp]++;
            if(m[tmp] > 1){
                return;
            }
            ans.push_back(tmp);
        }

        if(idx > nums.size()){
            return;
        }

        for(int i=idx; i<nums.size(); i++){
            if(tmp.size() >= 1){
                if(nums[i] < tmp[tmp.size()-1]){
                    continue;
                }
            }
            tmp.push_back(nums[i]);
            helper(ans, nums, i+1, tmp);
            tmp.pop_back();
        }
        return;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        helper(ans, nums, 0, tmp);
        return ans;
    }
};
