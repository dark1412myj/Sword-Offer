
class Solution {
public:
	void replaceSpace(char *str,int length) {
        string s = str;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==' ')
            {
                memcpy(str,"%20",3);
                str+=3;
            }else
            {
                *str=s[i];
                str++;
            }
        }
        *str=0;
	}
};
