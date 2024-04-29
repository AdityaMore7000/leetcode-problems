class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int finalXor = 0;
        for (int n : nums) {
            finalXor = finalXor ^ n;
        }
        
        int count = 0;
        while (k || finalXor) {
            if ((k % 2) != (finalXor % 2)) {
                count++;
            }
            k /= 2;
            finalXor /= 2;
        }
        
        return count;
    }
};