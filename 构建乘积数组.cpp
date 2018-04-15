class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> V;
        int sum = 1;
        for(int i=0;i<A.size();++i)
        {
            V.push_back(sum);
            sum*=A[i];
        }
        sum = 1;
        for(int i=A.size()-1;i>=0;--i)
        {
            V[i]*=sum;
            sum*=A[i];
        }
        return V;
    }
};
