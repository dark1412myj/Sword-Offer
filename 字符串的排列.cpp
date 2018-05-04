class Solution {
public:
    
    string ans;
    string flag;
    vector<string> V;
    void dfs(int dep)
    {
        if(dep==flag.size())
        {
            V.push_back(ans);
            return ;
        }
        char last='?';
        for(int i=0;i<flag.size();++i)
        {
            if(flag[i]!='#'&&flag[i]!=last)
            {
                last=flag[i];
                ans+=flag[i];
                flag[i]='#';
                dfs(dep+1);
                flag[i]=ans[ans.size()-1];
                ans.erase(ans.end()-1,ans.end());
            }
        }
    }
    
    vector<string> Permutation(string str) {
        if(str.size()==0)
            return V;
        //sort(str.begin(),str.end());
        flag=str;
        dfs(0);
        return V;
    }
};