class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0)
            return false;
        if(array[0].size()==0)
            return false;
        int xs=0,xe=array.size()-1,ys=array[0].size()-1;
        while(xs<=xe&&ys>=0)
        {
            if(array[xs][ys] == target)
                return true;
            if(array[xs][ys] < target)
                xs++;
            else
                ys--;
        }
        return false;
    }
};
