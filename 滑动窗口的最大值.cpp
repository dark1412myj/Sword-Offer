class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> ans;
        struct Node{
            int pos;
            int val;
            Node(int x,int y):pos(x),val(y){}
        };
        deque<Node> D;
        for(int i=0;i<num.size();++i)
        {
            while(D.size()&&D[0].pos+size<=i)
                D.pop_front();
            while(D.size() && num[i] >= D[D.size() - 1].val )
            {
                D.pop_back();
            }
            D.push_back(Node(i,num[i]));
            if(i>=size-1)
                ans.push_back(D[0].val);
        }
        return ans;
    }
};
