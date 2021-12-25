//1295 Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            string b = to_string(nums[i]);
            if(b.length() % 2 == 0) a++;
        }
        return a;
    }
};
