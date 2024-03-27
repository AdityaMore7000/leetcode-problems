class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int left = 0, right = 0, product = 1, count = 0;
    int n = nums.size();
    if(k <= 1) return 0;
    while (right < n) {
      product *= nums[right];
      while (product >= k) product /= nums[left++];
      count += 1 + (right - left);
      right++;
    }
    return count;
    }
};