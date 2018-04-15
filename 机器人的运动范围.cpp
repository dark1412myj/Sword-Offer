class Solution {
public:
    int* mp;
    int m_threshold;
    int cnt;
    bool isIllegal(int x,int y)
    {
        int sum = 0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        while(y)
        {
            sum+=y%10;
            y/=10;
        }
        return sum<=m_threshold;
    }
    int dfs(int x,int y,int rows, int cols)
    {
        if(x>0&&!mp[(x-1)*cols+y]&&isIllegal(x-1,y))
        {
            cnt++;
            mp[(x-1)*cols+y]=1;
            dfs(x-1,y,rows,cols);
        }
        if(x<rows-1&&!mp[(x+1)*cols+y]&&isIllegal(x+1,y))
        {
            cnt++;
            mp[(x+1)*cols+y]=1;
            dfs(x+1,y,rows,cols);
        }
        if(y>0&&!mp[x*cols+y-1]&&isIllegal(x,y-1))
        {
            cnt++;
            mp[(x)*cols+y-1]=1;
            dfs(x,y-1,rows,cols);
        }
        if(y<cols-1&&!mp[x*cols+y+1]&&isIllegal(x,y+1))
        {
            cnt++;
            mp[(x)*cols+y+1]=1;
            dfs(x,y+1,rows,cols);
        }
        return 0;
    }
    int movingCount(int threshold, int rows, int cols)
    {
        if(threshold<0)
            return 0;
        cnt=0;
        m_threshold = threshold;
        mp = new int[rows*cols];
        mp[0]=1;
        dfs(0,0,rows,cols);
        return cnt+1;
    }
};
