class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int start =0;
        //int end = array.size()-1;
        /*while(start<end)
        {
            while( start < end && array[start]%2 )++start;
            while(start < end && array[end]%2==0 )--end;
            if(start!=end)
                swap(array[start],array[end]);
        }
        */
        int end = 0;
        while(start<array.size()&&end<array.size())
        {
            while(start<array.size()&&array[start]%2) ++start;
            end = start+1;
            while(end<array.size()&&array[end]%2==0) ++end;
            if(end<array.size())
                swap(array[start],array[end]);
        }
        sort(array.begin()+start,array.end());
    }
};