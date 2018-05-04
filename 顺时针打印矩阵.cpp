class Solution {
public:

    vector<int> printMatrix(vector<vector<int> > matrix) {
    int nx[]={0,1,0,-1};
    int ny[]={1,0,-1,0};
        vector<int> V;
        int row = matrix.size();
        if(row==0)
            return V;
        int col = matrix[0].size();
        if(col==0)
            return V;
        bool* p=new bool[(row+1)*(col+1)*100];
        int pos=0;
        int x = 0;
        int y = 0;
        int cnt = row*col;
        while(cnt--)
        {
            V.push_back(matrix[ x ][ y]);
            p[x*col+y]=1;
            if( x+nx[pos] <0 || x+nx[pos] >=row || y+ny[pos] < 0 || y+ny[pos] >=col ||
               p[ (x+nx[pos]) *col+y+ny[pos] ] )
                 pos=(pos+1)%4;
            x = x+nx[pos];
            y = y+ny[pos];
        }
         return V;
    }
};