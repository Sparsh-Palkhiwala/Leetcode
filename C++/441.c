// 441 Arranging coins

class Solution {
public:
    int arrangeCoins(int n) {
        if (n <= 0) return 0;
        int x = n;
        for(int i = 1 ; i <= x ;i++)
        {
            n = n-i;
            if(n == 0)
                return i;
            else if(n < 0)
                return i-1;
        }
        return 0;
    }
};