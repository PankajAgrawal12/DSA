class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index;
        for(index=n-2;index>=0;index--)
        {
            if(nums[index]<nums[index+1])
                break;
        }
        if(index<0)
            sort(nums.begin(),nums.end());
        else
        {
            int i;
            for(i=n-1;i>index;i--)
            {
                if(nums[i]>nums[index])
                    break;
            }
            swap(nums[i],nums[index]);
            reverse(nums.begin()+index+1,nums.end());
        }
    }
};