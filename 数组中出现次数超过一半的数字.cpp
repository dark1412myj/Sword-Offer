#include<iostream>
#include<vector>
using namespace std;
#include"base/sword.hpp"

class Solution {
public:

    int sort_part(int* start,int* end)
    {
        int* st=start,*ed = end;
        int number = *st;
        while(st<ed)
        {
            while( st < ed && *ed > number )ed--;
            if(st<ed)
            {
                *st = *ed;
                ++st;
            }
            while( st < ed && *st > number )++st;
            if( st < ed )
            {
                *ed = *st;
                --ed;
            }
        }
        *st = number;
        return st-start;
    }

    void sort_n(int* start,int* end,int k)
    {
        if(start>end)
        {
            return ;
        }
        int now = sort_part(start,end);
        if(now < k)
            sort_n(start+now+1,end,k-now);
        if(now > k)
            sort_n(start,start+now-1,k);
    }

    int MoreThanHalfNum_Solution(vector<int> numbers) {
        sort_n(&numbers[0],&numbers[0]+numbers.size()-1,numbers.size()/2);
        if(numbers[0]==numbers[numbers.size()/2])
            return numbers[0];
        if(numbers[numbers.size()-1]==numbers[numbers.size()/2])
            return numbers[numbers.size()-1];
        return 0;
    }
}g_solution;

int main()
{
    vector<int> V={1,2,3,2,2,2,5,4,2};
    show(V);
    cout<<g_solution.MoreThanHalfNum_Solution(V)<<endl;
}
