//485 Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int ones = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                ones++;
                if(ones > maxOnes) maxOnes = ones;
            }
            else
            {
                ones = 0;
            }
        }
        return maxOnes;
    }
};
