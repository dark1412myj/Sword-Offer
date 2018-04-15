class Solution
{
public:
  //Insert one char from stringstream
    int hs[128];
    deque<int> D;
    void Insert(char ch)
    {
         hs[ch]++;
        if(hs[ch]==1)
            D.push_back(ch);
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        for(int i=0;i<D.size();++i)
        {
            if(hs[D[i]]==1)
                return D[i];
            else{
                D.erase(D.begin()+i);
                --i;
            }
        }
        return '#';
    }

};
