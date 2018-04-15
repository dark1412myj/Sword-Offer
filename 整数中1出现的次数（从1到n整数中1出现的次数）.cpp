class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        if(n==0)
            return 0;
        if(n<10)
            return 1;
        int left = n;
        int right = 0;
        int pos = 0;
        int _10 = 1;
        while(left/10)
        {
            left/=10;
            ++pos;
            _10*=10;
        }
        right = n%_10;

        int sum = 0;
        if(left == 1)
        {
            sum += (right+1);
        }
        else if( left > 1 )
        {
            sum += _10;
        }
        sum+=(_10/10*pos*left);
        sum+=NumberOf1Between1AndN_Solution(n-left*_10);
        return sum;
    }
};
