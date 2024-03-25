class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        } 
        for(auto x:freq){
            if(x.second>1)
            ans.push_back(x.first);
        }
        return ans;
    }
};