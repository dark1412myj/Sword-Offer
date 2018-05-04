class Solution {
public:
    int jumpFloor(int number) {
        int* p = new int[number+2];
        p[0]=1;
        p[1]=1;
        for(int i=2;i<=number;++i)
            p[i]=p[i-1]+p[i-2];
        return p[number];
    }
};