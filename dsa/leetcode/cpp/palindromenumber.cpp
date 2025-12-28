class Solution {
public:
    int solve(int x, long long temp) {
        if (x == 0) {
            return (int)temp;
        }
        int lastnum = x % 10;
        long long newn = temp * 10 + lastnum;
        if (newn > INT_MAX || newn < INT_MIN) {
            return 0; 
        }
        return solve(x / 10, newn);
    }

    bool isPalindrome(int x) {
        if (x < 0) return false; 
        if (x == solve(x, 0)) {
            return true;
        }

        return false;
    }
};



