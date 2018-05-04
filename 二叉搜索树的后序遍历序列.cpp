class Solution {
public:
    bool judge(int* start,int* end)
    {
        if(start>=end)
            return true;
        int* ed=end-1;
        while(ed>start&&*ed>*end)ed--;
        int* st=start;
        for(;st<ed;++st)
            if(*st>*end)
                return false;
        return judge(start,ed)&&judge(ed+1,end-1);
    }
    bool VerifySquenceOfBST(vector<int> sequence) 
    {
        if(sequence.size()<1)
            return false;
        return judge(&sequence[0],&sequence[0]+sequence.size()-1);
    }
};