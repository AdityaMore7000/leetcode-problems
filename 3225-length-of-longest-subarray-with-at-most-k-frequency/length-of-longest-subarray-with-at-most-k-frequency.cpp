class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans = 0,i=0,j=0;
        unordered_map<int,int> mp;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(i<=j && mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};