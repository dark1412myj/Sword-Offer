class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size()==0)
            return false;
        sort(numbers.begin(),numbers.end());
        do{
            int cha = -999;
            int flag = true;
            for(int i=0;i<numbers.size();++i)
            {
                if( numbers[i] )
                if( cha == -999 )
                    cha=numbers[i] - i;
                else if( cha != numbers[i] - i )
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return true;
        }while(next_permutation(numbers.begin(),numbers.end() ));
        return false;
    }
};
