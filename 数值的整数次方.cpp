class Solution {
public:
    double Power(double base, int exponent) {
        double ans = 1;
        if(exponent>=0)
        {
            for(int i=0;i<exponent;++i)
            {
                ans*=base;
            }
        }else
        {
            exponent*=-1;
            for(int i=0;i<exponent;++i)
            {
                ans*=base;
            }
            ans = 1/ans;
        }
        return ans;
    }
};