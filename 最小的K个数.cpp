

class Solution {
public:
    
    struct cmp{
        bool operator ()(int a,int b)
        {
            return a<b;
        }
    };
    
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> V;
        if(input.size()<k)
            return V;
        set<int,cmp> S;
        for(auto x:input)
            S.insert(x);
        auto l = S.begin();
        for(int i=0;i<k;++i)
        {
            if(l==S.end())break;
            V.push_back(*l);
            ++l;
        }
        return V;
    }
};