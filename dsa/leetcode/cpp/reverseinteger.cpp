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
    int reverse(int x) {
        return solve(x, 0);
    }
};




