class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i:nums){
            mp[i]++;
        }
        while(mp[0]--)
            ans.push_back(0);
        while(mp[1]--)
            ans.push_back(1);
        while(mp[2]--)
            ans.push_back(2);
    nums=ans; 
    }
};