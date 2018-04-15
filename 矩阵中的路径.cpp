#include<iostream>
using namespace std;

class Solution {
public:

    bool dfs(char* matrix,int x,int y, int rows, int cols, char* str)
    {
        if(*str==0)
            return true;
        char old = matrix[x*cols+y];
        str++;
        if(*str==0)
            return true;
        matrix[x*cols+y]='#';
        if(x>0&&matrix[(x-1)*cols+y]==*str)
        {
            if(dfs(matrix,x-1,y,rows,cols,str))
                return true;
        }
        if(x<rows-1&&matrix[(x+1)*cols+y]==*str)
        {
            if(dfs(matrix,x+1,y,rows,cols,str))
                return true;
        }
        if(y>0&&matrix[x*cols+y-1]==*str)
        {
            if(dfs(matrix,x,y-1,rows,cols,str))
                return true;
        }
        if(y<cols-1&&matrix[x*cols+y+1]==*str)
        {
            if(dfs(matrix,x,y+1,rows,cols,str))
                return true;
        }
        matrix[x*cols+y]=old;
        return false;
    }

    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(*str==matrix[i*cols+j])
                {
                    if(dfs(matrix, i, j, rows,  cols, str))
                        return true;
                }
            }
        }
        return false;
    }
}g_sol;
int main()
{
    char w[]="ABCESFCSADEE";
    cout<<g_sol.hasPath(w,3,4,"ABCCED")<<endl;
    return 0;
}
