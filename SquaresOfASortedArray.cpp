//977 Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        bool isSorted = true;
        int temp;
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] *= nums[i];
        }
        do
        {
            isSorted = true;
            for(int i = 0; i < nums.size()-1; i++)
            {
                if(nums[i+1] < nums[i])
                {
                    temp = nums[i];
                    nums[i] = nums[i+1];
                    nums[i+1] = temp;
                    isSorted = false;
                }
            }
        }while(!isSorted);
        return nums;
    }
};
