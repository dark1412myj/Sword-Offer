class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> Sta;
        int i=0;
        int j=0;
        while( i < popV.size() )
        {
            while( Sta.empty() || popV[i]!=Sta.top() )
            {
                if(j<pushV.size())
                    Sta.push(pushV[j++]);
                else
                    return false;
            }
            Sta.pop();
            i++;
        }
        return true;
    }
};