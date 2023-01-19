class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sz = nums.size();
        int sum = 0;
        int count = 0;
        vector<int> pref(k, 0);
        pref[0]++;

        for(int i=0; i<sz; i++){
            sum += nums[i];
            int rem = (sum%k + k) % k;
            count += pref[rem];
            pref[rem]++;
        }
        return count;
    }
};
