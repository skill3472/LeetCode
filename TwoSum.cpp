//1 Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if(nums[i] + nums[j] == target && i != j)
                    return {i, j};
            }
        }
        return {};
    }
};
