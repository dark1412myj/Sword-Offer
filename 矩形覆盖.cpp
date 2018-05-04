class Solution {
public:
    int rectCover(int number) {
        int* p =new int[number+2];
        p[1]=1;
        p[0]=0;
        p[2]=2;
        for(int i=3;i<=number;++i)
        {
            p[i]=p[i-1]+p[i-2];
        }
        return p[number];
    }
};