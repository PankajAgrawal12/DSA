class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int zero=0,two=n-1,one=0;
        while(one<=two)
        {
            if(arr[one]==2)
            {
                swap(arr[one],arr[two]);
                two--;
            }
            else if(arr[one]==0)
            {
                swap(arr[one],arr[zero]);
                zero++;
                one++;
            }
            else
            {
                one++;
            }
        }
    }
};