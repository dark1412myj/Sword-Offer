class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int i=0,j=rotateArray.size()-1;
        while(i<j)
        {
            int mid = i+j>>1;
            if( rotateArray[mid] >= rotateArray[rotateArray.size()-1])
            {
                i=mid+1;
            }else
            {
                j=mid;
            }
        }
        return rotateArray[i];
    }
};
