//9 Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        string sx = to_string(x);
        string reversed = sx;
        for (int i = 0; i < sx.length(); i++)
        {
            reversed[i] = sx[sx.length() - i - 1];
        }
        if(sx == reversed) return true;
        else return false;
    }
};
