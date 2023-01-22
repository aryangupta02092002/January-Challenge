class Solution {
public:
    bool isPalin(string s, int start, int end){
        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void helper(int idx, string s, vector<vector<string>> &ans, vector<string> &tmp){
        if(idx == s.size()){
            ans.push_back(tmp);
            return;
        }
        for(int i=idx; i<s.size(); i++){
            if(isPalin(s, idx, i)){
                tmp.push_back(s.substr(idx, i-idx+1));
                helper(i+1, s, ans, tmp);
                tmp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tmp;
        helper(0, s, ans, tmp);
        return ans;
    }
    
};
