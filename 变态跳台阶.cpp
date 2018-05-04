class Solution {
public:
    int jumpFloorII(int number) {
        int sum = 0;
        int* p = new int[number+2];
        p[0]=1;
        sum = p[0];
        for(int i=1;i<=number;++i)
        {
            p[i]=sum;
            sum+=p[i];
        }
        return p[number];
    }
};