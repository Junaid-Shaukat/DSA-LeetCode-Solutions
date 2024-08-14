class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
            
        long long beg = 0, mid = 0, end = x/2;
        while(beg <= end) {
            mid = (beg + end)/2;
            if(mid * mid < x) {
                if((mid + 1) * (mid + 1) > x)
                    return mid;
                beg = mid+1;
            } else if(mid * mid > x) {
                if( (mid - 1) * (mid - 1) < x)
                    return mid-1;
                end = mid - 1;
            } else 
                return mid;
        }
        return mid;
    }
};