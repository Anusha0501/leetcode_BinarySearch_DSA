#69. Sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
            return x;
        
        int low = 1, high = x, result = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if ((long long)mid * mid <= x) {
                result = mid; // mid is a valid candidate
                low = mid + 1; // search in the upper half
            } else {
                high = mid - 1; // search in the lower half
            }
        }
        return result;
    }
};
