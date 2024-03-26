class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,bool> present;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                present[nums[i]] = true;
            }
        }
        int i;
        for(i = 1;i<= INT32_MAX; i++){
            if(present[i]){
                continue;
            }
            else return i;
        }
        return i;
    }
};