class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); 
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
    }
    return s;
    }
};